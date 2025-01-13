#include "Character.h"
using namespace std;

int main() {
    string name;
    int choice;
    Character player;

    cout << "캐릭터 생성, 닉네임 : "; cin >> name; // nickname test
    while (1) { // job test
        cout << "직업 선택(1. 군인, 2. 직업2) : ";
        cin >> choice;
        if (choice == 1)
        {
            player = Character(name, "군인", 30, 80);
            break;
        }
        else if (choice == 2)
        {
            player = Character(name, "직업2", 20, 150);
            break;
        }
        else cout << "재입력하쇼";
    }
    cout << "캐릭 생성 완료 \n";
    player.printStatus();

    while (1) { // function test
        cout << "1. 경험치 획득, 2. 아이템 획득, 3. 피격 테스트(감염 10퍼), 4. 골드 추가(+500), 5. 골드(-500): ";
        cin >> choice;
        if (choice == 1)
        {
            player.gainExp(50);
            player.printStatus();
        }
        else if (choice == 2)
        {
            while (1)
            {
                cout << "1. 모르핀, 2. 일회용 방패, 3. 뒤로 : ";
                cin >> choice;
                if (choice == 1) player.addItem("모르핀", 1);
                else if (choice == 2) player.addItem("일회용 방패", 1);
                else if (choice == 3) break;
                else cout << "재입력 하쇼";
                
            }
            player.printStatus();
        }
        else if (choice == 3)
        {
            player.onHit(20);
            player.printStatus();
        }
        else if (choice == 4)
        {
            player.gainMoney(500);
            player.printStatus();
        }
        else if (choice == 5)
        {
            player.payMoney(500);
            player.printStatus();
        }
        else cout << "재입력하쇼";
    }

    return 0;
}
