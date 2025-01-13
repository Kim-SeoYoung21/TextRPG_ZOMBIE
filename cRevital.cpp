#include "cRevital.h"

void cRevital::use(Character* chara)
{
	if (CurrentStack < 1)
		return;

	--CurrentStack;
	chara->MaxHP += 80;
}