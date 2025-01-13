#include <iostream>
#include <string>

using namespace std;

int main() {
	//오프닝
	cout << "================" << endl;
	cout << "    좀보이드    " << endl;
	cout << "================" << endl;
	cout << "당신은 마지막 생존자입니다. 살아남기 위해서 좀비들과 맞서 싸우세요" << endl;

	//플레이어
	string playerName;


	cout << " 당신의 캐릭터 이름을 입력하세요: ";
	cin >> playerName;

	//출력
	cout << "캐릭터 생성 완료!" << endl;
	cout << "이름: " << playerName << endl;


	//엔딩
	if (playerHp > 0) {
		cout << "축하합니다, " << playerName << "님! 당신은 마지막" << "bossmonsterName << 을(를) 물리치고 마지막 생존자가 되셨습니다." << endl;
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