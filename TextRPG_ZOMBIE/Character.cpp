#include "Character.h"
#include <iostream>
using namespace std;

Character::Character()
    : Actor(), Job("무직"), Level(1), Exp(0), MaxExp(100) {
}

Character::Character(string inputName, string inputJob, int inputAttackPower, int inputMaxHP)
    : Actor(inputName, inputAttackPower, inputMaxHP), Job(inputJob), Level(1), Exp(0), MaxExp(100) {
}

// Add item
void Character::addItem(const string& item) {
    OwnedItems.push_back(item);
    cout << "아이템 추가: " << item << endl;
}

// Gain Exp
void Character::gainExp(int amount) {
    Exp += amount;
    cout << "경험치 획득: " << amount << " (현재 EXP: " << Exp << "/" << MaxExp << ")" << endl;

    while (Exp >= MaxExp) {
        levelUp();
    }
}

// PrintStatus
void Character::printStatus() {
    Actor::printStatus();
    cout << "Lv. " << Level << " (" << Job << ")" << endl;
    cout << "EXP: " << Exp << "/" << MaxExp << endl;
    cout << "보유 아이템: ";
    for (const auto& item : OwnedItems) {
        cout << item << " ";
    }
    cout << endl;
}

// Level up
void Character::levelUp() {
    Exp -= MaxExp;
    Level++;
    MaxExp += 50;
    cout << "축하합니다! Lv. " << Level << "로 레벨 업했습니다!" << endl;
}
