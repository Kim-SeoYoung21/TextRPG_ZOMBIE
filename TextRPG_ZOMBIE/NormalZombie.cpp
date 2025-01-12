#include "NormalZombie.h"
#include <random>

using namespace std;

NormalZombie::NormalZombie(int playerLevel) : Actor("", 0, 0)
{
    static default_random_engine generate(random_device{}());
    uniform_int_distribution<int> randomHP(playerLevel * 20, playerLevel * 30);
    uniform_int_distribution<int> randomAttackPower(playerLevel * 5, playerLevel * 10);

    Name = "NormalZombie";
    MaxHP = randomHP(generate);
    AttackPower = randomAttackPower(generate);
    HP = MaxHP;
}

string NormalZombie::GetName()
{
    return Name;
}

int NormalZombie::GetMaxHP()
{
    return MaxHP;
}

int NormalZombie::GetAttackPower()
{
    return AttackPower;
}

// TODO : 데미지는 뭘 해야할지? 문구 출력?
void NormalZombie::takeDamage()
{
}
