#pragma once
#include <memory>
#include "Actor.h"

class ZombieFactory
{
public:
    ZombieFactory(int level);

    std::unique_ptr<Actor> CreateZombie(int playerLevel);

private:
    int PlayerLevel;
};
