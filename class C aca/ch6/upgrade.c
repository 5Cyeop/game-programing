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
		printf("��ȭ�� �õ��Ͻðڽ��ϱ�? Y/N \n\n");
		char ch = _getch();

		int random = rand() % 100 + 1;
		
		if (r % 3 == 0)
			system("cls");

		if (ch == 'n' || ch == 'N')
		{
			e = 0;
			printf("��ȭ�� ����˴ϴ�.\n");
			printf("���� ����: %d, ���� ���ݷ�: %.1f\n", lv, ap);
			break;

		}

		else if (ch == 'y' || ch == 'Y')
		{
			e = 0;
			if (random > 30)
			{
				lv = lv + 1;
				ap = wep * lv;
				printf("��ȭ�� �����Ͽ����ϴ�!!\n");

				if (lv != 99)
				{
					printf("���� ����: %d, ���� ���ݷ�: %.1f\n\n", lv, ap);
				}

				else if (lv == 99)
				{
					printf("���Ⱑ �ְ����Դϴ�.\n");
					ap = wep * lv * 10;
					printf("���� ����: %d, ���� ���ݷ�: %.1f\n", lv, ap);
					break;
				}
			}

			else if (random <= 30 || random >= 2)
			{
				printf("��ȭ�� �����Ͽ����ϴ�.\n\n");
			}

			else if (random < 2)
			{
				printf("��ȭ�� �����Ͽ� ���Ⱑ �ı��Ǿ����ϴ�.");
				break;
			}
		}

		else
		{
			e += 1;
			printf("Y �Ǵ� N�� �����ּ���\n\n");

			if (e > 1 && e < 3)
				printf("�ѹ� �� �߸� �Է��� �� ��ȭ�� ����˴ϴ�.\n\n");

			else if (e >= 3)
			{
				printf("��ȭ�� ����˴ϴ�.\n");
				break;
			}
		}
	}
}