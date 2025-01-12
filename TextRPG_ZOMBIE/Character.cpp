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
void Character::addItem(const string& item)
{
    OwnedItems.push_back(item);
    cout << "아이템 추가: " << item << endl;
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

// PrintStatus
void Character::printStatus()
{
    cout << "\nLv." << Level << " " << Name << "(" << Job << ")" << endl;
    cout << "HP : " << HP << "/" << MaxHP << "(" << Condition << ")" << endl;
    cout << "EXP: " << Exp << "/" << MaxExp << endl;
    cout << "돈 : " << Money << endl;
    cout << "보유 아이템: ";
    for (const auto& item : OwnedItems)
    {
        cout << item << " ";
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


// 상태이상
void Character::Infect()
{
    int chance = rand() % 100;
    if (chance < 20) // 20% 확률로 감염
    {
        Condition = "감염";
        cout << Name << "이(가) 감염되었습니다. 백신을 사용해 주세요." << endl;
    }
}