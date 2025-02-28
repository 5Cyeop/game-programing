#include "battle.h"
#include "w_upgrade.h"
#include "lobby.h"
#define MON_MAX 4 //매크로 상수


char *monster[MON_MAX] = { "SLIME", "SKELETON", "DEMON", "DRAGON" };
int m_power[MON_MAX] = { 10, 100, 500, 2000 };
extern int cur;

void M_Battle()
{
	srand(time(NULL));
	int random = rand() % 3 + 1;
	
	printf("%s 와 마주쳤습니다. 싸우시겠습니까? Y/N\n\n", monster[random]);
	char a = _getch();

	if (a == 'Y' || a == 'y')
	{
		Battle(random);
	}

	else if (a == 'N' || a == 'n')
	{
		Menu();
	}

}


void Battle(int random)
{

	if (cur > m_power[random])
	{
		printf("%s 를 무찔렀습니다!\n", monster[random]);
	}

	else if (cur < m_power[random])
	{
		printf("%s 의 공격에 의해 사망하였습니다. 부활하시겠습니까? Y/N (부활하지 않을 시 게임이 종료됩니다.) \n", monster[random]);
		char respone = _getch();

		if (respone == 'Y' || respone == 'y')
		{
			Menu();
		}

		else if (respone == 'N' || respone == 'n')
		{
			exit(0);
		}
	}

}

//