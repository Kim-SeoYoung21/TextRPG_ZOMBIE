#include <iostream>
#include <memory>
#include <vector>
#include "ZombieFactory.h"
#include "Actor.h"

using namespace std;

int main()
{
    int playerLevel = 5;  // 예시 플레이어 레벨 값
    ZombieFactory zombieFactory(playerLevel);

    // 생성된 좀비 객체를 저장할 벡터
    vector<unique_ptr<Actor>> zombies;

    // 예시로 10마리의 좀비를 생성
    for (int i = 0; i < 10; i++) {
        unique_ptr<Actor> zombie = zombieFactory.CreateZombie(playerLevel);
        if (zombie) {
            zombies.push_back(move(zombie));
        }
    }

    // 생성된 좀비들의 정보를 출력
    for (const auto& zombie : zombies) {
        zombie->printStatus();
        cout << "---------------------" << endl;
    }

    return 0;
}
