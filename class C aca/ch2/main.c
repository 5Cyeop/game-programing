/*
	작성일:2025.02.18
	작성자:오창엽
	주제:변수에 대한 이해

	무기 공격력 수식
	현재 공격력 = 기본 공격력 * 무기 레벨
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
				printf("강화에 성공하여 무기의 레벨이 %d가 되었습니다.\n", lv);
				if (lv != 99)
					printf("무기 공격력: %.1f\n", ap);

				else if (lv == 99)
				{
					printf("무기가 최고레벨입니다.\n");
					ap = wep * lv * 10;
					printf("무기 공격력: %.1f\n", ap);
					break;
				}

			}
			else if (random <= 10)
			{
				printf("강화에 실패하여 무기가 파괴되었습니다.");
				break;
			}
		}

	}

	return 0;
}