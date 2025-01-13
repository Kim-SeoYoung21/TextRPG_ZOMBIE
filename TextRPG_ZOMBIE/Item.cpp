#include "Item.h"

// 생성자 구현 (초기화 값을 넣거나, 기본값 설정)
All_Item::All_Item()
    : Name(""), ItemType(-1), Price(0), CurrentStack(0), MaxStack(0)
{
}

void All_Item::use(Character* chara)
{
    // 아이템 종류(ItemType)에 따른 효과를 switch문으로 구현
    switch (ItemType)
    {
    case Morphine:
        // 예: 체력 50 회복
        cout << "사용: 모르핀, 체력 50 회복.";
        chara->HP += 50;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Epinephrine:
        cout << "사용: 에피네프린, 공격력 10 증가.";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Methylamphetamine:
        cout << "사용: 메스암페타민, 공격력 50 증가.";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Fentanyl:
        cout << "사용: 펜타닐, 최대 체력 30 감소, 체력 5000 회복";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Revital:
        cout << "사용: 레비탈, 최대 체력 80 증가";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    }

    // 사용 후 스택 감소
    if (CurrentStack > 0)
    {
        --CurrentStack;
    }
}