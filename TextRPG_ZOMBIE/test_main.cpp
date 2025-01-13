#include <iostream>
#include <memory>
#include <vector>
#include "ZombieFactory.h"
#include "Actor.h"

using namespace std;

int main()
{
    int playerLevel = 5;  // ���� �÷��̾� ���� ��
    ZombieFactory zombieFactory(playerLevel);

    // ������ ���� ��ü�� ������ ����
    vector<unique_ptr<Actor>> zombies;

    // ���÷� 10������ ���� ����
    for (int i = 0; i < 10; i++) {
        unique_ptr<Actor> zombie = zombieFactory.CreateZombie(playerLevel);
        if (zombie) {
            zombies.push_back(move(zombie));
        }
    }

    // ������ ������� ������ ���
    for (const auto& zombie : zombies) {
        zombie->printStatus();
        cout << "---------------------" << endl;
    }

    return 0;
}
