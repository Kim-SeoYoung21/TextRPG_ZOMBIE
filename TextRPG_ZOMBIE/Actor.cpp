//#include<iostream>
#include "Actor.h"
using namespace std;


Actor::Actor()
{
    Name = "Unreal";
    AttackPower = 0;
    HP = 0;
    MaxHP = 0;
}
Actor::Actor(string inputName, int inputAttackPower, int inputMaxHP)
{
    Name = inputName;
    AttackPower = inputAttackPower;
    HP = inputMaxHP;
    MaxHP = inputMaxHP;
}
int Actor::Attack()// ���� �޼���
{
    return AttackPower;
}
void Actor::onHit(int inputAttackPower) // �ǰ� �޼���
{
    HP -= inputAttackPower;
}
bool Actor::isDead()// ��� �޼���
{
    return HP <= 0;
}
void Actor::printStatus()// ���� ��� �޼���
{
    cout << "Name : " << Name << endl;
    cout << "Attack power : " << AttackPower << endl;
    cout << "Current health point : " << HP << endl;
}
