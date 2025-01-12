#include "ZombieFactory.h"
#include "NormalZombie.h"
#include "VariantZombie.h"
#include "HalfZombie.h"
#include <iostream>
#include <random>

using namespace std;

ZombieFactory::ZombieFactory(int level) : PlayerLevel(level)
{
}

unique_ptr<Actor> ZombieFactory::CreateZombie(int playerLevel)
{
    // �� ���� �κ� �Ȱ��� ���̴� �κ��� ������ ���� ��ƿ�� ���� �ɵ�
    static default_random_engine generate(random_device{}());
    uniform_int_distribution<int> RandomCreate(1, 3);
    int randomValue = RandomCreate(generate);

    //// Player ������ 10 �̻��� ��
    //if (PlayerLevel >= 10)
    //{
    //    // TODO : ���� ���� ����
    //    BossZombie(PlayerLevel);
    //    return;
    //}

    // �������� ���� ���� �������� ���� ����
    switch (randomValue)
    {
    case 1:
        return make_unique<NormalZombie>(playerLevel);
    case 2:
        return make_unique<VariantZombie>(playerLevel);
    case 3:
        return make_unique<HalfZombie>(playerLevel);
    default:
        return nullptr;
    }
}