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
    int Attack();
    void onHit(int inputAttackPower) override;
    void printStatus();
};