/*
	2025.02.24
	오창엽
	코드의 흐름
*/

//디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int point = 0;
	srand(time(NULL));
	int random = rand() % 100 + 1;
	int num = 0;
	printf("%d\n", random);

	while (num != random)
	{
		int i = 0;
		i++;
		printf("num : ");
		scanf_s("%d", &num);
		if (num < random)
			printf("up\n");

		else if (num > random)
			printf("down\n");

		else
		{
			printf("correct!\n");
			point += 100;



		}
	}

	return 0;
}
