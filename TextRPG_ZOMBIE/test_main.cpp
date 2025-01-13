#include "Actor.h"
#include "ZombieFactory.h"
#include "NormalZombie.h"
#include "VariantZombie.h"
#include "HalfZombie.h"
#include "BossZombie.h"
#include <iostream>
#include <memory>
#include <thread>
#include <chrono>

// 헬퍼 함수: 좀비의 이름(GetName)은 Actor에는 없으므로, 각 파생 클래스에서 정의된 GetName()을 동적 캐스팅을 통해 호출 ??
std::string GetZombieName(const std::unique_ptr<Actor>& zombie)
{
    if (auto nz = dynamic_cast<NormalZombie*>(zombie.get()))
        return nz->GetName();
    else if (auto vz = dynamic_cast<VariantZombie*>(zombie.get()))
        return vz->GetName();
    else if (auto hz = dynamic_cast<HalfZombie*>(zombie.get()))
        return hz->GetName();
     else if(auto bz = dynamic_cast<BossZombie*>(zombie.get()))
         return bz->GetName();
    return "Unknown";
}

int main()
{
    using namespace std;
    int playerLevel = 5;  // 플레이어 레벨 예시

    // ZombieFactory 객체 생성
    ZombieFactory zombieFactory;
    std::unique_ptr<Actor> zombie = zombieFactory.CreateZombie(playerLevel);

    if (!zombie)
    {
        std::cerr << "좀비 생성 실패" << std::endl;
        return 1;
    }

    cout << "===== 초기 좀비 상태 =====" << endl;
    zombie->printStatus();
    cout << "---------------------" << endl;

    // 데미지 시뮬레이션
    cout << "\n===== 데미지 시뮬레이션 =====" << endl;
    cout << "\n[" << GetZombieName(zombie) << "] 전투 시작!" << endl;
    int hitCount = 0;
    
    // 좀비 사망까지
    while (!zombie->isDead()) {
        int damage = 10;  // 캐릭터 공격력 예시
        zombie->onHit(damage);
        
        // 각 hit 사이에 딜레이
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        hitCount++;
    }

    // 최종 상태
    cout << "\n===== 최종 좀비 상태 =====" << endl;
    zombie->printStatus();
    cout << "---------------------" << endl;

    return 0;
}
