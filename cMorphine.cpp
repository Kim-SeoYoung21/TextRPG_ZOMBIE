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


// ������ �ߵ� ���� �� ������ ��� üũ �ϳ���?
// ������ ���� �����ϴ� �Լ�? Ŭ����?�� �������?
// ���ݷ��� �����ߴٰ� �پ��°� ��� �������� ������Դϴ�(������ �� ���� ī��Ʈ �ϴ°� �ִٸ� �ذ�� �� �����ϴ�
// ������ �߰��� enum�Ἥ �����ߴµ� �̷��� actor �������� pushback ���ϼŵ� �� �� ���ƿ�