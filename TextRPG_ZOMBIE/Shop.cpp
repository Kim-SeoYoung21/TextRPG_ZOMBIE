#include "Shop.h"
// #include "Character.h"
// #include "Itme.h"

#include <iostream>
using namespace std;

Shop::Shop()
{
	int shop_idx;
	cout << "\n============================ " << endl;
	cout << "           상   점           " << endl;
	cout << "1.구매   2. 판매   3. 보유물품" << endl;
	cout << "어떤 서비스를 이용하시겠습니가? : ";
	cin >> shop_idx;
}

void Shop::displayItems()
{

}

void Shop::buyItem(int index)
{

}
void Shop::sellItem(int index)
{

}

Shop::~Shop()
{
	cout << "   상점이 종료되었습니다. " << endl;
	cout << "============================ " << endl;
}