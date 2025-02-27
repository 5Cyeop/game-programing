#include "upgrade.h"

void Upgrade_M()
{
	while (1)
	{
		printf("Y.강화한다 / N.강화를 취소한다.\n");

		char i = _getch();

		if (i == 'Y' || i == 'y')
		{
			W_Upgrade();
		}

		else if (i == 'N' || i == 'n')
		{
			printf("강화를 종료합니다.\n");
			break;
		}

		else
			printf("Press Y/N\n");
	}
}

void L_Upgrade()
{

}

void W_Upgrade()
{
	int lv = 1;
	int wei = 5;
	int base = 10;
	int cur = 0;
	
	lv += 1;
	cur = base + wei * lv;

	printf("레벨: %d, 공격력: %d\n\n", lv, cur);
}

