#pragma once
#include "Item.h"

class cMethylamphetamine : public All_Item
{
public:
	cMethylamphetamine()
	{
		Name = "�޽�����Ÿ��";
		Price = 80;
		CurrentStack = 0;
		MaxStack = 2;
	}
	void use(Character* chara) override;
};