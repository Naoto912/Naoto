#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    // 戦力
    int allyPower = 100;
    int enemyPower = 100;

    // 攻撃力
    int allyAttack = 0;
    int enemyAttack = 0;

    // 行動
    int allyAction = rand() % 2;
    int enemyAction = rand() % 2;

    // 味方を選ぶ
    int random = rand() % 3;

    if (random == 0)
    {
        cout << "味方：剣士" << endl;
        allyAttack = 30;
    }
    else if (random == 1)
    {
        cout << "味方：魔法使い" << endl;
        allyAttack = 25;
    }
    else
    {
        cout << "味方：召喚士" << endl;
        allyAttack = 20;
    }

    // 敵を選ぶ
    random = rand() % 3;

    if (random == 0)
    {
        cout << "敵：剣士" << endl;
        enemyAttack = 30;
    }
    else if (random == 1)
    {
        cout << "敵：魔法使い" << endl;
        enemyAttack = 25;
    }
    else
    {
        cout << "敵：召喚士" << endl;
        enemyAttack = 20;
    }

    return 0;
}