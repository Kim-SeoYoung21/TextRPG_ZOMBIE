#include <string>
#include <vector>
#include <iostream>
#include <cstdlib> // ���� ������ ���� ��� ����
#include <ctime> // �ð� ���� �Լ��� ���� ��� ����
#include "Actor.h"
#include "Character.h"
// ���� ����(���� ������ ��� ���� ������)
// ���� ����?

using namespace std;

enum ItemList // ��� ������ ���
{
	Morphine,
	Epinephrine,
	Methylamphetamine,
	Fentanyl,
	Revital,
	Max
};

class Character;

class All_Item // ������ ���� �� ���ȿ��
{
protected:
	string Name;
	ItemList ItemType;
	int Price;
	int CurrentStack;
	int MaxStack;
public: 
	virtual void use(Character* chara){}
};

class Inventory
{
public:
	All_Item item[ItemList::Max];
};

class MonsterDropItem // ���� ���� Ŭ���� *�����۵�����̺�
{
public:
	void dropitem(Inventory* Inven)
	{ 
		// ���� �����? �۾� ����
		//if (isdead() == true)
		//{
		//	int droptable = 0;

		//	srand((unsigned int)time(null)); // ���� �õ� �ʱ�ȭ

		//	droptable = rand() % 101; // 0~100���� ����

		//	if (droptable < 31)
		//	{
		//		inven.item[morphine].currentstack += 1;
		//	}
		//	else if (30 < droptable && droptable < 51)
		//	{
		//		item[epinephrine].currentstack += 1;
		//	}
		//	else if (50 < droptable && droptable < 61)
		//	{
		//		item[methylamphetamine].currentstack += 1;
		//	}
		//	else if (60 < droptable && droptable < 71)
		//	{
		//		item[fentanyl].currentstack += 1;
		//	}
		//	else if (70 < droptable && droptable < 76)
		//	{
		//		item[revital].currentstack += 1;
		//	}
		//	else if (75 < droptable && droptable < 81)
		//	{
		//		item[morphine].currentstack += 1;
		//		item[epinephrine].currentstack += 1;
		//	}
		//}
	}
};