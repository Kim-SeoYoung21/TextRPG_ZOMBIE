#pragma once
#include "Actor.h"
#include <vector>

class Character : public Actor {
private:
    vector<string> OwnedItems;
    string Job;
    int Exp;
    int MaxExp;
    int Level;

public:
    // 기본 생성자
    Character();

    // 사용자 정의 생성자
    Character(string inputName, string inputJob, int inputAttackPower, int inputMaxHP);

    // 아이템 추가
    void addItem(const string& item);

    // 경험치 획득
    void gainExp(int amount);

    // 상태 출력
    void printStatus();

private:
    // 레벨업 처리
    void levelUp();
};
