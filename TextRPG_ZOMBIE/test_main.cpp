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

// ���� �Լ�: ������ �̸�(GetName)�� Actor���� �����Ƿ�, �� �Ļ� Ŭ�������� ���ǵ� GetName()�� ���� ĳ������ ���� ȣ�� ??
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
    int playerLevel = 5;  // �÷��̾� ���� ����

    // ZombieFactory ��ü ����
    ZombieFactory zombieFactory;
    std::unique_ptr<Actor> zombie = zombieFactory.CreateZombie(playerLevel);

    if (!zombie)
    {
        std::cerr << "���� ���� ����" << std::endl;
        return 1;
    }

    cout << "===== �ʱ� ���� ���� =====" << endl;
    zombie->printStatus();
    cout << "---------------------" << endl;

    // ������ �ùķ��̼�
    cout << "\n===== ������ �ùķ��̼� =====" << endl;
    cout << "\n[" << GetZombieName(zombie) << "] ���� ����!" << endl;
    int hitCount = 0;
    
    // ���� �������
    while (!zombie->isDead()) {
        int damage = 10;  // ĳ���� ���ݷ� ����
        zombie->onHit(damage);
        
        // �� hit ���̿� ������
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        hitCount++;
    }

    // ���� ����
    cout << "\n===== ���� ���� ���� =====" << endl;
    zombie->printStatus();
    cout << "---------------------" << endl;

    return 0;
}
