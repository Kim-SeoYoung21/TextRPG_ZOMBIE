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
	//��� �Լ�
	Actor();//������
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
		cout << "�̸� : " << Name << endl;
		cout << "���ݷ� : " << AttackPower << endl;
		cout << "���� ü�� : " << HP << endl;
	}
}; #pragma once
