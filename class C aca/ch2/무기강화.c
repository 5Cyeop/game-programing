/*
	�ۼ���:2025.02.18
	�ۼ���:��â��
	����:������ ���� ����

	���� ���ݷ� ����
	���� ���ݷ� = �⺻ ���ݷ� * ���� ����
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int wep;
	wep = 10;
	int lv = 1;
	float ap = 100.0;
	char ch;
	int e = 0;
	
	while(1)
	{
		printf("��ȭ�� �õ��Ͻðڽ��ϱ�? Y/N \n");
		scanf_s(" %c", &ch, 10);

	    while (getchar() != '\n');

		int random = rand() % 100 + 1;
		
		if (e > 1)
			printf("�ѹ� �� �߸� �Է��� �� ��ȭ�� ����˴ϴ�.\n");
		
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
					printf("���� ����: %d, ���� ���ݷ�: %.1f\n", lv, ap);

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
				printf("��ȭ�� �����Ͽ����ϴ�.\n");
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
			printf("Y �Ǵ� N�� �����ּ���\n");

			if (e > 3)
			{
				printf("��ȭ�� ����˴ϴ�.\n");
				break;
			}
		}
	}

	return 0;
}