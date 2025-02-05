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
		cout << "좀비" << name << " 등장,  체력: " << hp << ", 공격력: " << attackPower << endl;
	}
};


class ZombieFactory {
public:
	static Monster CreateZombie(int playerLever1) {
		string zombieName = "좀비";
		int hp = playerLever1 * 10;
		int attackPower = playerLever1 * 10;
		int expReward = playerLever1 * 10;
		int goldReward = playerLever1 * 10;
	}


	class Shop {
	public:
		void displayItems() {
			cout << "상점에 오신 것을 환영합니다." << endl;

		}
};

int main() {
	//오프닝
	cout << "================" << endl;
	cout << "    좀보이드    " << endl;
	cout << "================" << endl;
	cout << "당신은 마지막 생존자입니다. 살아남기 위해서 좀비들과 맞서 싸우세요" << endl;

	//플레이어
	string playerName, job;

	cout << " 당신의 캐릭터 이름을 입력하세요: ";
	cin >> playerName;
	cout << " 직업을 선택하세요 (1. 군인, 2. 직업2): ";
	cin >> job;

	//출력
	cout << "캐릭터 생성 완료!" << endl;
	cout << "이름: " << playerName << endl;
	cout << "직업: " << job << endl;
	cout << "레벨: " << level << endl;
	cout << "체력: " << hp << "/" << maxHp << endl;
	cout << "공격력: " << attackPower << endl;
	cout << "경험치: " << exp << "/" << level * 100 < , endl;
	cout << "골드: " << gold << endl;
	cout << "=================" << endl;


	//전투
	bool battle(Character & player, Monster & monster) {
		cout << "좀비를 마주쳤습니다. 전투가 시작됩니다." << endl;
		monster.printStatus();

		int turn = 1;
		while (player.hp > 0 && monster.hp > 0) {
			cout << "[턴 " << turn++ << "]" << endl;

			monster.hp -= player.attackPower;
			if (monster.hp <= 0) {
				cout << player.name << "가 " << monster.name << "을(를) 처치했습니다!" << endl;
				player.gainExp(monster.expReward);
				player.gainGold(monster.goldReward);
				return true;
			}
			cout << player.name << "가 " << monster.name << "을(를) 공격했습니다! "
				<< monster.name << " 체력: " << monster.hp << endl;

			player.hp -= monster.attackPower;
			if (player.hp <= 0) {
				cout << player.name << " 체력이 0이 되었습니다. 게임 오버!" << endl;
				return false;
			}
			cout << monster.name << "이(가) " << player.name << "을(를) 공격했습니다! "
				<< player.name << " 체력: " << player.hp << endl;
		}
		return false;
	}


	//선택 메뉴
	while {
		cout << " =====메뉴창===== " << endl;
		cout << " 1. 전투 시작 " << endl;
		cout << " 2. 상점 " << endl;
		cout << " 3. 상태 확인 " << endl;
		cout << " 0. 게임 종료 " << endl;
		cout << " 선택: ";

		int choice;
		cin >> choice;
	}

	if (choice == 1) {
		cout << "전투를 시작합니다." << endl;
	}
	else if (choice == 2) {
		cout << "상점에 오신 것을 환영합니다." << endl;
	}
	else if (choice == 3) {
		player.printStatus();
	}
	else if (choice == 0) {
		cout << "게임을 종료합니다." << endl;
		break;
	}
	else {
		cout << "잘못된 선택입니다. 다시 선택해주세요." << endl;
	}
}


		//엔딩
		if (playerHp > 0) {
			cout << "축하합니다, " << playerName << "님! 당신은 마지막" << bossmonsterName << "을(를) 물리치고 마지막 생존자가 되셨습니다." << endl;
		}
		else {
			cout << "안타깝지만" << playerName << "님은 전투에서 패배하셨습니다...." << endl;
			cout << "." << endl;
			cout << "." << endl;
			cout << "." << endl;
			cout << "." << endl;
			cout << "마지막 생존자는 없었습니다." << endl;

		}


	return 0;
	}