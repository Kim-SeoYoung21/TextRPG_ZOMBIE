#pragma once
#include "Item.h"

class cRevital : public All_Item
{
public:
	cRevital()
	{
		Name = "∑π∫Ò≈ª";
		Price = 300;
		CurrentStack = 0;
		MaxStack = 2;
	}
	void use(Character* chara) override;
};