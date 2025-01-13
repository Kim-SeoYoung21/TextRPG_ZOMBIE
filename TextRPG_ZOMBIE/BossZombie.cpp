#include "BossZombie.h"
#include <random>

using namespace std;

BossZombie::BossZombie(int playerLevel) : Actor("", 0, 0)
{
	static default_random_engine generate(random_device{}());
	uniform_int_distribution<int> randomHP(playerLevel * 20 * 1.5, playerLevel * 30 * 1.5);
	uniform_int_distribution<int> randomAttackPower(playerLevel * 5 * 1.5, playerLevel * 10 * 1.5);

	Name = "BossZombie";
	MaxHP = randomHP(generate);
	AttackPower = randomAttackPower(generate);
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

int BossZombie::GetAttackPower()
{
	return AttackPower;
}

void BossZombie::onHit(int inputAttackPower)
{
	Actor::onHit(inputAttackPower);

	cout << Name << "는 " << inputAttackPower << "의 데미지를 입었다..!" << endl;

	if (isDead())
		cout << "축하합니다! 보스를 클리어하고 게임의 엔딩을 보셨습니다!" << endl;
}

void BossZombie::printStatus()
{
	cout << "Name : " << Name << endl;
	cout << "Attack power : " << AttackPower << endl;
	cout << "Current health point : " << HP << endl;
}
