#include <string>
#include <vector>
#include <iostream>
#include <cstdlib> // 난수 생성을 위한 헤더 파일
#include <ctime> // 시간 관련 함수를 위한 헤더 파일
// 캐릭터 파일(아이템 스텟 및 인벤토리 불러오기용)
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
	int Price;
	int CurrentStack;
	int MaxStack;
public: 
	virtual void use(Character* chara){}
};

class Inventory : public OwnedItems // 캐릭터 인벤토리
{
public:
	All_Item item[ItemList::Max];
};

class MonsterDropItem : // 몬스터 하위 클래스 *아이템드랍테이블
{
public:
	void dropitem(Inventory* Inven)
	{
		if (//몬스터 bool값이 == true)
		{
			int droptable = 0;

			srand((unsigned int)time(NULL)); // 랜덤 시드 초기화

			droptable = rand() % 101; // 0~100까지 랜덤

			if (droptable < 31)
			{
				Inven.item[Morphine].CurrentStack += 1;
			}
			else if (30 < droptable && droptable < 51)
			{
				item[Epinephrine].CurrentStack += 1;
			}
			else if (50 < droptable && droptable < 61)
			{
				item[Methylamphetamine].CurrentStack += 1;
			}
			else if (60 < droptable && droptable < 71)
			{
				item[Fentanyl].CurrentStack += 1;
			}
			else if (70 < droptable && droptable < 76)
			{
				item[Revital].CurrentStack += 1;
			}
			else if (75 < droptable && droptable < 81)
			{
				item[Morphine].CurrentStack += 1;
				item[Epinephrine].CurrentStack += 1;
			}
		}
	}
};