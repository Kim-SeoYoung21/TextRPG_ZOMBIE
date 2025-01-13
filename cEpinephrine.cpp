#include "cEpinephrine.h"

void cEpinephrine::use(Character* chara)
{
	if (CurrentStack < 1)
		return;

	--CurrentStack;
	chara->AttackPower += 10;
}