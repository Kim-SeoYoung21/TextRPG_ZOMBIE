#include "VariantZombie.h"
#include "RandomUtil.h"

using namespace std;

VariantZombie::VariantZombie(int playerLevel) : Actor("", 0, 0)
{
    Name = "VariantZombie";
    MaxHP = RandomUtil::GetRandomInt(playerLevel * 20, playerLevel * 30);
    AttackPower = RandomUtil::GetRandomInt(playerLevel * 5, playerLevel * 10);
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

int VariantZombie::Attack()
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
