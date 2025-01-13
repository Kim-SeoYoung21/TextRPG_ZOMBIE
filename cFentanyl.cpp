#include "cFentanyl.h"

void cFentanyl::use(Character* chara)
{
	if (CurrentStack < 1)
		return;
	
	--CurrentStack;
	chara->MaxHP -= 30;
	chara->HP += 5000;

	if (chara->HP > chara->MaxHP)
	{
		chara->HP = chara->MaxHP;
	}
}