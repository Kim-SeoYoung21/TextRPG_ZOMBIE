#pragma once

#include "Actor.h"
#include <string>
#include <istream>

class VariantZombie : public Actor
{
public:
    VariantZombie(int playerLevel);  // ������

    string GetName();
    int GetMaxHP();
    int GetAttackPower();
    void onHit(int inputAttackPower) override;
    void printStatus();
};