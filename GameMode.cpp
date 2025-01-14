#include "character.h"
#include "ZombieFactory.h"
#include "Shop.h"
#include "Item.h"
#include "Item.h"

#include <iostream>
#include <string>
using namespace std;

class Character {
public:
	string name;
	int hp;
	int attackPower;
	int exp;
	int gold;

	void gainExp(int amount) { exp += amount; }
	void gainGold(int amount) { gold += amount; }
};

class Monster {
public:
	string name;
	int hp;
	int attackPower;

	void printStatus() {
		cout << "����" << name << " ����,  ü��: " << hp << ", ���ݷ�: " << attackPower << endl;
	}
};


class ZombieFactory {
public:
	static Monster CreateZombie(int playerLever1) {
		string zombieName = "����";
		int hp = playerLever1 * 10;
		int attackPower = playerLever1 * 10;
		int expReward = playerLever1 * 10;
		int goldReward = playerLever1 * 10;
	}


	class Shop {
	public:
		void displayItems() {
			cout << "������ ���� ���� ȯ���մϴ�." << endl;

		}
};

int main() {
	//������
	cout << "================" << endl;
	cout << "    �����̵�    " << endl;
	cout << "================" << endl;
	cout << "����� ������ �������Դϴ�. ��Ƴ��� ���ؼ� ������ �¼� �ο켼��" << endl;

	//�÷��̾�
	string playerName, job;

	cout << " ����� ĳ���� �̸��� �Է��ϼ���: ";
	cin >> playerName;
	cout << " ������ �����ϼ��� (1. ����, 2. ����2): ";
	cin >> job;

	//���
	cout << "ĳ���� ���� �Ϸ�!" << endl;
	cout << "�̸�: " << playerName << endl;
	cout << "����: " << job << endl;
	cout << "����: " << level << endl;
	cout << "ü��: " << hp << "/" << maxHp << endl;
	cout << "���ݷ�: " << attackPower << endl;
	cout << "����ġ: " << exp << "/" << level * 100 < , endl;
	cout << "���: " << gold << endl;
	cout << "=================" << endl;


	//����
	bool battle(Character & player, Monster & monster) {
		cout << "���� �����ƽ��ϴ�. ������ ���۵˴ϴ�." << endl;
		monster.printStatus();

		int turn = 1;
		while (player.hp > 0 && monster.hp > 0) {
			cout << "[�� " << turn++ << "]" << endl;

			monster.hp -= player.attackPower;
			if (monster.hp <= 0) {
				cout << player.name << "�� " << monster.name << "��(��) óġ�߽��ϴ�!" << endl;
				player.gainExp(monster.expReward);
				player.gainGold(monster.goldReward);
				return true;
			}
			cout << player.name << "�� " << monster.name << "��(��) �����߽��ϴ�! "
				<< monster.name << " ü��: " << monster.hp << endl;

			player.hp -= monster.attackPower;
			if (player.hp <= 0) {
				cout << player.name << " ü���� 0�� �Ǿ����ϴ�. ���� ����!" << endl;
				return false;
			}
			cout << monster.name << "��(��) " << player.name << "��(��) �����߽��ϴ�! "
				<< player.name << " ü��: " << player.hp << endl;
		}
		return false;
	}


	//���� �޴�
	while {
		cout << " =====�޴�â===== " << endl;
		cout << " 1. ���� ���� " << endl;
		cout << " 2. ���� " << endl;
		cout << " 3. ���� Ȯ�� " << endl;
		cout << " 0. ���� ���� " << endl;
		cout << " ����: ";

		int choice;
		cin >> choice;
	}

	if (choice == 1) {
		cout << "������ �����մϴ�." << endl;
	}
	else if (choice == 2) {
		cout << "������ ���� ���� ȯ���մϴ�." << endl;
	}
	else if (choice == 3) {
		player.printStatus();
	}
	else if (choice == 0) {
		cout << "������ �����մϴ�." << endl;
		break;
	}
	else {
		cout << "�߸��� �����Դϴ�. �ٽ� �������ּ���." << endl;
	}
}


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