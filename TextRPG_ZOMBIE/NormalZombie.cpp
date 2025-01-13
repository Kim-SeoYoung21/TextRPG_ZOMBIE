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

void NormalZombie::onHit(int inputAttackPower)
{
    Actor::onHit(inputAttackPower);

    cout << Name << "는 " << inputAttackPower << "의 데미지를 입었다..!" << endl;
    
    if (isDead())
        cout << Name << "는 마지막 일격으로 사망했습니다 !!!" << endl;
}

void NormalZombie::printStatus()
{
    cout << "Name : " << Name << endl;
    cout << "Attack power : " << AttackPower << endl;
    cout << "Current health point : " << HP << endl;
}
