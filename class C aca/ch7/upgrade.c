#include "upgrade.h"
int lv = 1;
int cur = 0;
int base = 10;
int wei = 5;
int a = 0;
char *grade[6] = { "normal", "epic", "rare", "legendary", "unique", "ego" };
int upgrade_point = 0;
int p = 0;

void Upgrade_M()
{
	while (1)
	{
		printf("진화포인트: %d\n", upgrade_point);
		printf("Y.강화한다 / N.강화를 취소한다.\n\n");
		p += 1;

		if (p % 5 == 0)
			system("cls");

		char i = _getch();

		if (i == 'Y' || i == 'y')
			W_Upgrade();

		else if (i == 'N' || i == 'n')
		{
			printf("강화를 종료합니다.\n");
			break;
		}

		else if (i == 'L' || i == 'l')
		{
			printf("진화를 진행하려면 200 진화포인트가 소모됩니다. 진행하시겠습니까?\n");
			char loyal = _getch();
			if (loyal == 'Y' || loyal == 'y')
			{
				if (upgrade_point >= 200)
				{
					upgrade_point -= 200;
					Evolution();
				}

				else if (upgrade_point < 200)
				{
					printf("진화 포인트가 부족합니다.\n\n");
					Upgrade_M();
				}
			}
			else if (loyal == 'N' || loyal == 'n')
			{
				printf("진화를 취소하였습니다.\n\n");
				Upgrade_M();
			}
		}

		else
			printf("Press Y/N\n");
	}
}

void Evolution()
{
	int L_random = rand() % 100 + 1;
	srand(time(NULL));

	if (L_random < 20)
	{
		if (a < 5)
		{
			a += 1;
			base *= (a + 1);
			cur = base + wei * lv;
			printf("무기진화에 성공하였습니다!!\n");
			printf("등급: %s, 레벨: %d, 공격력: %d\n\n",grade[a], lv, cur);
		}
		
		else if (a >= 5)
		{
			printf("무기가 최고등급입니다.\n\n");
		}
	}

	else
	{
		cur = base + wei * lv;
		printf("진화에 실패하였습니다.\n");
		printf("등급: %s, 레벨: %d, 공격력: %d\n\n",grade[a], lv, cur);
	}
}


void W_Upgrade()
{
	int random = rand() % 100 + 1;
	srand(time(NULL));


	if (random < 40)
	{
		lv += 1;
		cur = base + wei * lv;
		upgrade_point += 50;
		printf("강화에 성공하였습니다!!\n");
		printf("등급: %s, 레벨: %d, 공격력: %d\n\n",grade[a], lv, cur);
	}

	else if (random > 40)
	{
		cur = base + wei * lv;
		printf("강화에 실패하였습니다.\n");
		printf("등급: %s, 레벨: %d, 공격력: %d\n\n",grade[a], lv, cur);
		upgrade_point += 100;
	}

	else
	{	
		if (a > 3)
		{
			printf("강화에 실패하여 무기가 파괴되었습니다.");
			exit(0);
		}
	}
}