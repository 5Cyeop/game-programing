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
		printf("��ȭ����Ʈ: %d\n", upgrade_point);
		printf("Y.��ȭ�Ѵ� / N.��ȭ�� ����Ѵ�.\n\n");
		p += 1;

		if (p % 5 == 0)
			system("cls");

		char i = _getch();

		if (i == 'Y' || i == 'y')
			W_Upgrade();

		else if (i == 'N' || i == 'n')
		{
			printf("��ȭ�� �����մϴ�.\n");
			break;
		}

		else if (i == 'L' || i == 'l')
		{
			printf("��ȭ�� �����Ϸ��� 200 ��ȭ����Ʈ�� �Ҹ�˴ϴ�. �����Ͻðڽ��ϱ�?\n");
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
					printf("��ȭ ����Ʈ�� �����մϴ�.\n\n");
					Upgrade_M();
				}
			}
			else if (loyal == 'N' || loyal == 'n')
			{
				printf("��ȭ�� ����Ͽ����ϴ�.\n\n");
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
			printf("������ȭ�� �����Ͽ����ϴ�!!\n");
			printf("���: %s, ����: %d, ���ݷ�: %d\n\n",grade[a], lv, cur);
		}
		
		else if (a >= 5)
		{
			printf("���Ⱑ �ְ����Դϴ�.\n\n");
		}
	}

	else
	{
		cur = base + wei * lv;
		printf("��ȭ�� �����Ͽ����ϴ�.\n");
		printf("���: %s, ����: %d, ���ݷ�: %d\n\n",grade[a], lv, cur);
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
		printf("��ȭ�� �����Ͽ����ϴ�!!\n");
		printf("���: %s, ����: %d, ���ݷ�: %d\n\n",grade[a], lv, cur);
	}

	else if (random > 40)
	{
		cur = base + wei * lv;
		printf("��ȭ�� �����Ͽ����ϴ�.\n");
		printf("���: %s, ����: %d, ���ݷ�: %d\n\n",grade[a], lv, cur);
		upgrade_point += 100;
	}

	else
	{	
		if (a > 3)
		{
			printf("��ȭ�� �����Ͽ� ���Ⱑ �ı��Ǿ����ϴ�.");
			exit(0);
		}
	}
}