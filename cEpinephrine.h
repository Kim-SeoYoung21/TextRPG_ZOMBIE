#pragma once
#include "Item.h"

class cEpinephrine : public All_Item
{
public:
	cEpinephrine()
	{
		Name = "에피네프린";
		Price = 60;
		CurrentStack = 0;
		MaxStack = 4;
	}
	void use(Character* chara) override;
};