#include "ZombieFactory.h"
#include "NormalZombie.h"
#include "VariantZombie.h"
#include "HalfZombie.h"
#include "BossZombie.h"
#include "RandomUtil.h"
#include <iostream>

using namespace std;

ZombieFactory::ZombieFactory()
{
}

unique_ptr<Actor> ZombieFactory::CreateZombie(const int playerLevel)
{
    int randomValue = RandomUtil::GetRandomInt(1, 3);

    // Player ������ 10 �̻��� �� ���� ���� ����
    if (playerLevel >= 10)
        return make_unique<BossZombie>(playerLevel);

    // �������� ���� ���� �������� ���� ����
    // TODO : main���� ���� �� �����ϰ� ���� Ÿ�Ը� �־ �ϴ� ������ �и��� �������丮 ����� ������
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

