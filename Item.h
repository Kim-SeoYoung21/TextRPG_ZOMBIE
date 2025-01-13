#include <string>
#include <vector>
#include <iostream>
#include <cstdlib> // ���� ������ ���� ��� ����
#include <ctime> // �ð� ���� �Լ��� ���� ��� ����
// ĳ���� ����(������ ���� �� �κ��丮 �ҷ������)
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
	int Price;
	int CurrentStack;
	int MaxStack;
public: 
	virtual void use(Character* chara){}
};

class Inventory : public OwnedItems // ĳ���� �κ��丮
{
public:
	All_Item item[ItemList::Max];
};

class MonsterDropItem : // ���� ���� Ŭ���� *�����۵�����̺�
{
public:
	void dropitem(Inventory* Inven)
	{
		if (//���� bool���� == true)
		{
			int droptable = 0;

			srand((unsigned int)time(NULL)); // ���� �õ� �ʱ�ȭ

			droptable = rand() % 101; // 0~100���� ����

			if (droptable < 31)
			{
				Inven.item[Morphine].CurrentStack += 1;
			}
			else if (30 < droptable && droptable < 51)
			{
				item[Epinephrine].CurrentStack += 1;
			}
			else if (50 < droptable && droptable < 61)
			{
				item[Methylamphetamine].CurrentStack += 1;
			}
			else if (60 < droptable && droptable < 71)
			{
				item[Fentanyl].CurrentStack += 1;
			}
			else if (70 < droptable && droptable < 76)
			{
				item[Revital].CurrentStack += 1;
			}
			else if (75 < droptable && droptable < 81)
			{
				item[Morphine].CurrentStack += 1;
				item[Epinephrine].CurrentStack += 1;
			}
		}
	}
};