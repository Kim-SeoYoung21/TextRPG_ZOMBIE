#include "VariantZombie.h"
#include <random>

using namespace std;

VariantZombie::VariantZombie(int playerLevel) : Actor("", 0, 0)
{
    static default_random_engine generate(random_device{}());
    uniform_int_distribution<int> randomHP(playerLevel * 20, playerLevel * 30);
    uniform_int_distribution<int> randomAttackPower(playerLevel * 5, playerLevel * 10);

    Name = "VariantZombie";
    MaxHP = randomHP(generate);
    AttackPower = randomAttackPower(generate);
    HP = MaxHP;
}

string VariantZombie::GetName()
{
    return Name;
}

int VariantZombie::GetMaxHP()
{
    return MaxHP;
}

int VariantZombie::GetAttackPower()
{
    return AttackPower;
}

void VariantZombie::onHit(int inputAttackPower)
{
    Actor::onHit(inputAttackPower);

    cout << Name << "�� " << inputAttackPower << "�� �������� �Ծ���..!" << endl;

    if (isDead())
        cout << Name << "�� ������ �ϰ����� ����߽��ϴ� !!!" << endl;
}

void VariantZombie::printStatus()
{
    cout << "Name : " << Name << endl;
    cout << "Attack power : " << AttackPower << endl;
    cout << "Current health point : " << HP << endl;
}
