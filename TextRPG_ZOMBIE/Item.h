#include <string>
#include <vector>
#include <iostream>
#include "Actor.h"
#include "Character.h"

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

class All_Item // ������ ���� �� ���ȿ��
{
protected:
	string Name;
	ItemList ItemType;
	int Price;
	int CurrentStack;
	int MaxStack;
public: 

	All_Item(ItemList type);

	virtual void use(Character* chara);
};

class Inventory 
{
public:
	All_Item item[ItemList::Max];
};

class MonsterDropItem 
{
public:
	void dropitem(Inventory* Inven);
};