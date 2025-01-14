#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Actor
{
private:
	string Name;//
	int AttackPower;//
	int HP;//
	int MaxHP;//
public:
	Actor();
	int Attack()
	{
		return AttackPower;
	}
	void onHit(int inputAttackPower)
	{
		HP -= inputAttackPower;
	}
	bool isDead()
	{
		return hp > 0 ? false : true;
	}
	void printStatus()
	{
		cout << "이름 : " << Name << endl;
		cout << "공격력 : " << AttackPower << endl;
		cout << "체력 : " << HP << endl;
	}
};