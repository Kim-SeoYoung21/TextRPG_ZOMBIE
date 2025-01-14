#include "MonsterDropItem.h"

void MonsterDropItem::dropItem(Inventory* Inven)
{
    int droptable = RandomUtil::GetRandomInt(0, 100);
   
    // ���� ��� ���̺�:
    // 0 ~ 30: Morphine  
    // 31 ~ 50: Epinephrine  
    // 51 ~ 60: Methylamphetamine  
    // 61 ~ 70: Fentanyl  
    // 71 ~ 75: Revital  
    // 76 ~ 100: �ƹ��͵� ������� ����

    if (droptable <= 30)
    {
        // ���� ���
        Inven->item[Morphine].setCurrentStack(Inven->item[Morphine].getCurrentStack() + 1);
        cout << "���Ͱ� '����'�� ����߽��ϴ�!" << endl;
    }
    else if (droptable <= 50)
    {
        // ���ǳ����� ���
        Inven->item[Epinephrine].setCurrentStack(Inven->item[Epinephrine].getCurrentStack() + 1);
        cout << "���Ͱ� '���ǳ�����'�� ����߽��ϴ�!" << endl;
    }
    else if (droptable <= 60)
    {
        // �޽�����Ÿ�� ���
        Inven->item[Methylamphetamine].setCurrentStack(Inven->item[Methylamphetamine].getCurrentStack() + 1);
        cout << "���Ͱ� '�޽�����Ÿ��'�� ����߽��ϴ�!" << endl;
    }
    else if (droptable <= 70)
    {
        // ��Ÿ�� ���
        Inven->item[Fentanyl].setCurrentStack(Inven->item[Fentanyl].getCurrentStack() + 1);
        cout << "���Ͱ� '��Ÿ��'�� ����߽��ϴ�!" << endl;
    }
    else if (droptable <= 75)
    {
        // ����Ż ���
        Inven->item[Revital].setCurrentStack(Inven->item[Revital].getCurrentStack() + 1);
        cout << "���Ͱ� '����Ż'�� ����߽��ϴ�!" << endl;
    }
}