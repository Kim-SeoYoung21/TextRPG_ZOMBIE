#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Actor
{
private:
	string Name;//Name of Actor object
	int AttackPower;//Attack power of Actor object
	int HP;//Current health point of Actor object
	int MaxHP;//Maximun health point of Actor object
public:
	
	Actor();//Default constructor
	Actor(string inputName, int inputAttackPower, int inputMaxHP);

	int Attack();	
	void onHit(int inputAttackPower);
	bool isDead();
	void printStatus();
}; 
