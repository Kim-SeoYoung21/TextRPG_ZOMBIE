#include "Item.h"

// ������ ���� (�ʱ�ȭ ���� �ְų�, �⺻�� ����)
All_Item::All_Item()
    : Name(""), ItemType(-1), Price(0), CurrentStack(0), MaxStack(0)
{
}

void All_Item::use(Character* chara)
{
    // ������ ����(ItemType)�� ���� ȿ���� switch������ ����
    switch (ItemType)
    {
    case Morphine:
        // ��: ü�� 50 ȸ��
        cout << "���: ����, ü�� 50 ȸ��.";
        chara->HP += 50;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Epinephrine:
        cout << "���: ���ǳ�����, ���ݷ� 10 ����.";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Methylamphetamine:
        cout << "���: �޽�����Ÿ��, ���ݷ� 50 ����.";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Fentanyl:
        cout << "���: ��Ÿ��, �ִ� ü�� 30 ����, ü�� 5000 ȸ��";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    case Revital:
        cout << "���: ����Ż, �ִ� ü�� 80 ����";
        chara->HP += 30;
        if (chara->HP > chara->MaxHP)
            chara->HP = chara->MaxHP;
        break;
    }

    // ��� �� ���� ����
    if (CurrentStack > 0)
    {
        --CurrentStack;
    }
}