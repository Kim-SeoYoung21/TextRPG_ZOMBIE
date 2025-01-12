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
    // 이 랜덤 부분 똑같이 쓰이는 부분이 많으니 랜덤 유틸로 빼도 될듯
    static default_random_engine generate(random_device{}());
    uniform_int_distribution<int> RandomCreate(1, 3);
    int randomValue = RandomCreate(generate);

    //// Player 레벨이 10 이상일 때
    //if (PlayerLevel >= 10)
    //{
    //    // TODO : 보스 좀비 구현
    //    BossZombie(PlayerLevel);
    //    return;
    //}

    // 랜덤으로 나온 값을 바탕으로 좀비 생성
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