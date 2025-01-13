#pragma once
#include "Item.h"

class cMorphine : public All_Item
{
public:
	cMorphine()
	{
		Name = "¸ð¸£ÇÉ";
		Price = 50;
		CurrentStack = 0;
		MaxStack = 5;
	}
	void use(Character* chara) override;
};