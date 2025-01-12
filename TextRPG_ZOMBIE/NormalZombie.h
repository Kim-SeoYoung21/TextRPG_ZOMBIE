#pragma once

#include "Actor.h"
#include <string>
#include <iostream>

class NormalZombie : public Actor
{
public:
    NormalZombie(int playerLevel);  // »ý¼ºÀÚ

    std::string GetName();
    int GetMaxHP();
    int GetAttackPower();
    void takeDamage();
};