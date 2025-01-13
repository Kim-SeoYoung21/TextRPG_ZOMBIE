#include <iostream>
#include <string>
#include "character.h"

using namespace std;

int main() {
	//오프닝
	cout << "================" << endl;
	cout << "    좀보이드    " << endl;
	cout << "================" << endl;
	cout << "당신은 마지막 생존자입니다. 살아남기 위해서 좀비들과 맞서 싸우세요" << endl;

	//플레이어
	string playerName,job;


	cout << " 당신의 캐릭터 이름을 입력하세요: ";
	cin >> playerName;
	cout << " 직업을 선택하세요 (무직) ";
	cin >> job;

	//출력
	cout << "캐릭터 생성 완료!" << endl;
	cout << "이름: " << playerName << endl;
	cout << "직업: " << job << endl;

	//초기 플레이어와 몬스터 상태 설정


	//전투
	cout << "좀비를 마주쳤습니다. 전투가 시작됩니다." << endl;

	
	//선택 메뉴
	while {
		cout << " =====메뉴창===== " << endl;
		cout << " 1. 전투 시작 " << endl;
		cout << " 2. 상점 " << endl;
		cout << " 3. 상태 확인 " << endl;
		cout << " 선택: ";

		int choice;
		cin >> choice;
	}

	if ( choice == 1) {
		cout << " 전투를 시작합니다. " << endl;
		cout << "좀비가 공격합니다." << endl;



	else if //상점
		
	else if //상태창




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