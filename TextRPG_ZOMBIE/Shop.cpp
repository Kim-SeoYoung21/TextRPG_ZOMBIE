#include "Shop.h"
// #include "Character.h"
// #include "Itme.h"

#include <iostream>
using namespace std;

Shop::Shop()
{
	int shop_idx;
	cout << "\n============================ " << endl;
	cout << "           ��   ��           " << endl;
	cout << "1.����   2. �Ǹ�   3. ������ǰ" << endl;
	cout << "� ���񽺸� �̿��Ͻðڽ��ϰ�? : ";
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
	cout << "   ������ ����Ǿ����ϴ�. " << endl;
	cout << "============================ " << endl;
}