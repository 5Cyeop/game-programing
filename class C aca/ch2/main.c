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
		scanf_s("%c", &ch);
		int random = rand() % 100 + 1;
		int lv;
		float ap;
		
		if (ch == 'n')
		{
			break;
		}

		else if (ch != 'n')
		{
			if (random > 1)
			{
				lv = i + 1;
				ap = wep * lv;
				printf("��ȭ�� �����Ͽ� ������ ������ %d�� �Ǿ����ϴ�.\n", i + 1);
				printf("���� ���ݷ�: %.1f\n", ap);

			}
			else if (random <= 1)
			{
				printf("��ȭ�� �����Ͽ� ���Ⱑ �ı��Ǿ����ϴ�.");
				break;
			}
		}


	}


	return 0;
}