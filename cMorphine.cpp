#include "cMorphine.h"

void cMorphine::use(Character* chara)
{
	if (CurrentStack < 1)
		return;

	--CurrentStack;
	chara->HP += 50;

	if (chara->HP > chara->MaxHP)
	{
		chara->HP = chara->MaxHP;
	}
}


// 아이템 발동 조건 및 판정은 어디서 체크 하나요?
// 전투의 턴을 관리하는 함수? 클래스?가 있을까요?
// 공격력이 증가했다가 줄어드는건 어떻게 구현할지 고민중입니다(전투의 턴 수를 카운트 하는게 있다면 해결될 것 같습니다
// 아이템 추가를 enum써서 관리했는데 이러면 actor 단위에서 pushback 안하셔도 될 것 같아요