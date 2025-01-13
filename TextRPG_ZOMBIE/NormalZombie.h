#pragma once

#include "Actor.h"
#include <string>
#include <iostream>

class NormalZombie : public Actor
{
public:
    NormalZombie(int playerLevel);

    std::string GetName();
    int GetMaxHP();
    int Attack();
    void onHit(int inputAttackPower) override;
    void printStatus();
};