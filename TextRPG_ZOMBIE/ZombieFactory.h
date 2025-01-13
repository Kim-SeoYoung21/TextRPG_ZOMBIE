#pragma once
#include "Actor.h"
#include <memory>

class ZombieFactory
{
public:
    ZombieFactory(int level);

    std::unique_ptr<Actor> CreateZombie(int playerLevel);
    //Actor* CreateZombie(int playerLevel);

private:
    int PlayerLevel;
};
