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
	int wep;
	wep = 10;
	srand(time(NULL));
	
	for (int i = 1; i < 100; i++)
	{
		char ch;
		scanf_s("%c", &ch, 10);

	    while (getchar() != '\n');

		int random = rand() % 100 + 1;
		int lv;
		float ap;
		
		if (ch == 'n')
		{
			break;
		}

		else if (ch != 'n')
		{
			if (random > 10)
			{
				lv = i + 1;
				ap = wep * lv;
				printf("��ȭ�� �����Ͽ� ������ ������ %d�� �Ǿ����ϴ�.\n", lv);
				if (lv != 99)
					printf("���� ���ݷ�: %.1f\n", ap);

				else if (lv == 99)
				{
					printf("���Ⱑ �ְ����Դϴ�.\n");
					ap = wep * lv * 10;
					printf("���� ���ݷ�: %.1f\n", ap);
					break;
				}

			}
			else if (random <= 10)
			{
				printf("��ȭ�� �����Ͽ� ���Ⱑ �ı��Ǿ����ϴ�.");
				break;
			}
		}

	}

	return 0;
}