#include <iostream>
#include <string>

using namespace std;

int main() {
	//������
	cout << "================" << endl;
	cout << "    �����̵�    " << endl;
	cout << "================" << endl;
	cout << "����� ������ �������Դϴ�. ��Ƴ��� ���ؼ� ������ �¼� �ο켼��" << endl;

	//�÷��̾�
	string playerName;


	cout << " ����� ĳ���� �̸��� �Է��ϼ���: ";
	cin >> playerName;

	//���
	cout << "ĳ���� ���� �Ϸ�!" << endl;
	cout << "�̸�: " << playerName << endl;


	//����
	if (playerHp > 0) {
		cout << "�����մϴ�, " << playerName << "��! ����� ������" << "bossmonsterName << ��(��) ����ġ�� ������ �����ڰ� �Ǽ̽��ϴ�." << endl;
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