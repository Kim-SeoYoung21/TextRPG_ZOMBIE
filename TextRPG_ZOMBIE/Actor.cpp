#include <iostream>
#include <string>
#include "character.h"

using namespace std;

int main() {
	//������
	cout << "================" << endl;
	cout << "    �����̵�    " << endl;
	cout << "================" << endl;
	cout << "����� ������ �������Դϴ�. ��Ƴ��� ���ؼ� ������ �¼� �ο켼��" << endl;

	//�÷��̾�
	string playerName,job;


	cout << " ����� ĳ���� �̸��� �Է��ϼ���: ";
	cin >> playerName;
	cout << " ������ �����ϼ��� (����) ";
	cin >> job;

	//���
	cout << "ĳ���� ���� �Ϸ�!" << endl;
	cout << "�̸�: " << playerName << endl;
	cout << "����: " << job << endl;

	//�ʱ� �÷��̾�� ���� ���� ����


	//����
	cout << "���� �����ƽ��ϴ�. ������ ���۵˴ϴ�." << endl;

	
	//���� �޴�
	while {
		cout << " =====�޴�â===== " << endl;
		cout << " 1. ���� ���� " << endl;
		cout << " 2. ���� " << endl;
		cout << " 3. ���� Ȯ�� " << endl;
		cout << " ����: ";

		int choice;
		cin >> choice;
	}

	if ( choice == 1) {
		cout << " ������ �����մϴ�. " << endl;
		cout << "���� �����մϴ�." << endl;



	else if //����
		
	else if //����â




	//����
	if (playerHp > 0) {
		cout << "�����մϴ�, " << playerName << "��! ����� ������" << bossmonsterName << "��(��) ����ġ�� ������ �����ڰ� �Ǽ̽��ϴ�." << endl;
	}
	else {
		cout << "��Ÿ������" << playerName << "���� �������� �й��ϼ̽��ϴ�...." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "������ �����ڴ� �������ϴ�." << endl;

	}


	return 0;
}