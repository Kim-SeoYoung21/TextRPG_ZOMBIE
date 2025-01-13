#include "Character.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Character::Character()
    : Actor(), Job("무직"), Level(1), Exp(0), MaxExp(100), Condition("건강"), Money(0)
{
}

Character::Character(string inputName, string inputJob, int inputAttackPower, int inputMaxHP)
    : Actor(inputName, inputAttackPower, inputMaxHP), Job(inputJob), Level(1), Exp(0), MaxExp(100), Condition("건강"), Money(0)
{
}

// Add item
void Character::addItem(const string& itemName, int amount)
{
    if (Inventory.find(itemName) != Inventory.end())
    {
        Inventory[itemName] += amount;
    }
    else
    {
        Inventory[itemName] = amount;
    }
    cout << "아이템 추가 : " << itemName << "을(를) " << amount << "개 추가했습니다." << endl;
}

// Gain Exp
void Character::gainExp(int amount)
{
    Exp += amount;
    cout << "경험치 획득: " << amount << " (현재 EXP: " << Exp << "/" << MaxExp << ")" << endl;

    while (Exp >= MaxExp)
    {
        levelUp();
    }
}

// Gain money
void Character::gainMoney(int amount)
{
    Money += amount;
    cout << "돈 획득: " << amount << " (보유 돈 : " << Money << ")" << endl;
}

// Pay money
bool Character::payMoney(int price)
{
    if (price > Money)
    {
        cout << "보유 골드가 부족합니다!";
        return 0;
    }
    else
    {
        Money -= price;
        cout << price << "원을 지불 했습니다. 잔액 (" << Money << ")";
        return 1;
    }    
}

// PrintStatus
void Character::printStatus()
{
    cout << "\nLv." << Level << " " << Name << "(" << Job << ")" << endl;
    cout << "HP : " << HP << "/" << MaxHP << "(" << Condition << ")" << endl;
    cout << "EXP: " << Exp << "/" << MaxExp << endl;
    cout << "돈 : " << Money << endl;
    cout << "보유 아이템: ";
    for (const auto& item : Inventory)
    {
        cout << item.first << "(" << item.second << ") ";
    }
    cout << endl;
}

// Level up
void Character::levelUp()
{
    Exp -= MaxExp;
    Level++;
    MaxExp += 50;
    cout << "축하합니다! Lv. " << Level << "로 레벨 업했습니다!" << endl;
}

// 피격 오버라이딩
void Character::onHit(int inputAttackPower) { 
    Actor::onHit(inputAttackPower);
    
    if (Condition == "건강") {
        cout << Name << "이(가) " << inputAttackPower << " 피해를 입었습니다. (" << HP << "/" << MaxHP << ")" << endl;
        Infect(); // 감염 처리
    }
    else
    {
        int dot = MaxHP * 0.05;
        cout << Name << "이(가) " << inputAttackPower << " 피해를 입었습니다. (" << HP << "/" << MaxHP << ")" << endl;
        Actor::onHit(dot);
        cout << Name << "이(가) 감염되어 " << dot << " 데미지를 추가적으로 받았습니다. (" << HP << " / " << MaxHP << ")" << endl;
    }
}

// 상태이상
void Character::Infect()
{
    int chance = rand() % 100;
    if (chance < 10) // 10% 확률로 감염
    {
        Condition = "감염";
        cout << Name << "이(가) 감염되었습니다. (피격 시 최대 체력 5 퍼센트 피해를 더 받습니다.)" << endl;
    }
}