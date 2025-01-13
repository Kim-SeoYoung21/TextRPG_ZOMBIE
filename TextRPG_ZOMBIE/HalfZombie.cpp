#include "HalfZombie.h"
#include <random>

using namespace std;

HalfZombie::HalfZombie(int playerLevel) : Actor("", 0, 0)
{
    static default_random_engine generate(random_device{}());
    uniform_int_distribution<int> randomHP(playerLevel * 20, playerLevel * 30);
    uniform_int_distribution<int> randomAttackPower(playerLevel * 5, playerLevel * 10);

    Name = "HalfZombie";
    MaxHP = randomHP(generate);
    AttackPower = randomAttackPower(generate);
    HP = MaxHP;
}

string HalfZombie::GetName()
{
    return Name;
}

int HalfZombie::GetMaxHP()
{
    return MaxHP;
}

int HalfZombie::GetAttackPower()
{
    return AttackPower;
}

void HalfZombie::onHit(int inputAttackPower)
{
    Actor::onHit(inputAttackPower);

    cout << Name << "�� " << inputAttackPower << "�� �������� �Ծ���..!" << endl;

    if (isDead())
        cout << Name << "�� ������ �ϰ����� ����߽��ϴ� !!!" << endl;
}

void HalfZombie::printStatus()
{
    cout << "Name : " << Name << endl;
    cout << "Attack power : " << AttackPower << endl;
    cout << "Current health point : " << HP << endl;
}
