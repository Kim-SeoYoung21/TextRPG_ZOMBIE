#include "BossZombie.h"
#include "RandomUtil.h"

using namespace std;

BossZombie::BossZombie(int playerLevel) : Actor("", 0, 0)
{
	Name = "BossZombie";
	MaxHP = RandomUtil::GetRandomInt(playerLevel * 20 * 1.5, playerLevel * 30 * 1.5);
	AttackPower = RandomUtil::GetRandomInt(playerLevel * 5 * 1.5, playerLevel * 10 * 1.5);
	HP = MaxHP;
}

string BossZombie::GetName()
{
	return Name;
}

int BossZombie::GetMaxHP()
{
	return MaxHP;
}

int BossZombie::Attack()
{
	return AttackPower;
}

void BossZombie::onHit(int inputAttackPower)
{
	Actor::onHit(inputAttackPower);

	cout << Name << "�� " << inputAttackPower << "�� �������� �Ծ���..!" << endl;

	if (isDead())
		cout << "�����մϴ�! ������ Ŭ�����ϰ� ������ ������ ���̽��ϴ�!" << endl;
}

void BossZombie::printStatus()
{
	cout << "Name : " << Name << endl;
	cout << "Attack power : " << AttackPower << endl;
	cout << "Current health point : " << HP << endl;
}
