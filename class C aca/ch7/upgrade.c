#include "upgrade.h"

void Upgrade_M()
{
	while (1)
	{
		printf("Y.��ȭ�Ѵ� / N.��ȭ�� ����Ѵ�.\n");

		char i = _getch();

		if (i == 'Y' || i == 'y')
		{
			W_Upgrade();
		}

		else if (i == 'N' || i == 'n')
		{
			printf("��ȭ�� �����մϴ�.\n");
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

	printf("����: %d, ���ݷ�: %d\n\n", lv, cur);
}

