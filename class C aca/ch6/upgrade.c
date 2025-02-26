#include "upgrade.h"

void WeponUpgrade()
{
	srand(time(NULL));
	int wep;
	wep = 10;
	int lv = 1;
	float ap = 100.0;
	int e = 0;
	int r = 0;

	while (1)
	{
		r++;
		printf("강화를 시도하시겠습니까? Y/N \n\n");
		char ch = _getch();

		int random = rand() % 100 + 1;
		
		if (r % 3 == 0)
			system("cls");

		if (ch == 'n' || ch == 'N')
		{
			e = 0;
			printf("강화가 종료됩니다.\n");
			printf("무기 레벨: %d, 무기 공격력: %.1f\n", lv, ap);
			break;

		}

		else if (ch == 'y' || ch == 'Y')
		{
			e = 0;
			if (random > 30)
			{
				lv = lv + 1;
				ap = wep * lv;
				printf("강화에 성공하였습니다!!\n");

				if (lv != 99)
				{
					printf("무기 레벨: %d, 무기 공격력: %.1f\n\n", lv, ap);
				}

				else if (lv == 99)
				{
					printf("무기가 최고레벨입니다.\n");
					ap = wep * lv * 10;
					printf("무기 레벨: %d, 무기 공격력: %.1f\n", lv, ap);
					break;
				}
			}

			else if (random <= 30 || random >= 2)
			{
				printf("강화에 실패하였습니다.\n\n");
			}

			else if (random < 2)
			{
				printf("강화에 실패하여 무기가 파괴되었습니다.");
				break;
			}
		}

		else
		{
			e += 1;
			printf("Y 또는 N을 눌러주세요\n\n");

			if (e > 1 && e < 3)
				printf("한번 더 잘못 입력할 시 강화가 종료됩니다.\n\n");

			else if (e >= 3)
			{
				printf("강화가 종료됩니다.\n");
				break;
			}
		}
	}
}