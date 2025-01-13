#pragma once

#include "Actor.h"
#include <string>
#include <iostream>

class HalfZombie : public Actor
{
public:
    HalfZombie(int playerLevel);

    string GetName();
    int GetMaxHP();
    int GetAttackPower();
    void onHit(int inputAttackPower) override;
    void printStatus();
};