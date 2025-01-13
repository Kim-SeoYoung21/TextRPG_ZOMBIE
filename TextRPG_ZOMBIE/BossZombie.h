#pragma once

#include "Actor.h"
#include <iostream>
#include <string>

class BossZombie : public Actor
{
public:
	BossZombie(int playerLevel);

    std::string GetName();
    int GetMaxHP();
    int GetAttackPower();
    void onHit(int inputAttackPower) override;
    void printStatus();
};