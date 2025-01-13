#include "cMethylamphetamine.h"

void cMethylamphetamine::use(Character* chara)
{
	if (CurrentStack < 1)
		return;
	
	--CurrentStack;
	chara->AttackPower += 50;
}