#pragma once
#include "Item.h"

class cFentanyl : public All_Item
{
public:
	cFentanyl()
	{
		Name = "∆Ê≈∏¥“";
		Price = 90;
		CurrentStack = 0;
		MaxStack = 2;
	}
	void use(Character* chara) override;
};