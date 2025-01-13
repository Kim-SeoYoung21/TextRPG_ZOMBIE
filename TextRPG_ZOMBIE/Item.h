#include <string>
#include <vector>
#include <iostream>
#include <cstdlib> // 난수 생성을 위한 헤더 파일
#include <ctime> // 시간 관련 함수를 위한 헤더 파일
#include "Actor.h"
#include "Character.h"
// 몬스터 파일(몬스터 아이템 드랍 관련 연동용)
// 상점 파일?

using namespace std;

enum ItemList // 모든 아이템 목록
{
	Morphine,
	Epinephrine,
	Methylamphetamine,
	Fentanyl,
	Revital,
	Max
};

class Character;

class All_Item // 아이템 설정 및 사용효과
{
protected:
	string Name;
	ItemList ItemType;
	int Price;
	int CurrentStack;
	int MaxStack;
public: 
	virtual void use(Character* chara){}
};

class Inventory
{
public:
	All_Item item[ItemList::Max];
};

class MonsterDropItem // 몬스터 하위 클래스 *아이템드랍테이블
{
public:
	void dropitem(Inventory* Inven)
	{ 
		// 몬스터 사망값? 작업 공유
		//if (isdead() == true)
		//{
		//	int droptable = 0;

		//	srand((unsigned int)time(null)); // 랜덤 시드 초기화

		//	droptable = rand() % 101; // 0~100까지 랜덤

		//	if (droptable < 31)
		//	{
		//		inven.item[morphine].currentstack += 1;
		//	}
		//	else if (30 < droptable && droptable < 51)
		//	{
		//		item[epinephrine].currentstack += 1;
		//	}
		//	else if (50 < droptable && droptable < 61)
		//	{
		//		item[methylamphetamine].currentstack += 1;
		//	}
		//	else if (60 < droptable && droptable < 71)
		//	{
		//		item[fentanyl].currentstack += 1;
		//	}
		//	else if (70 < droptable && droptable < 76)
		//	{
		//		item[revital].currentstack += 1;
		//	}
		//	else if (75 < droptable && droptable < 81)
		//	{
		//		item[morphine].currentstack += 1;
		//		item[epinephrine].currentstack += 1;
		//	}
		//}
	}
};