/*
작성일:2025.02.17
작성자:오창엽
주제:변수
*/

#include <stdio.h>
int main()
{
	int player_attackpower;
	player_attackpower = 0;
	printf("player와 enemy가 만났습니다.\n");
	printf("enemy는 player를 발견하지 못했습니다. \n");
	printf("player_power:");
	scanf("%d", &player_attackpower);
	printf("player가 enemy를 공격하여 %d의 데미지를 주었습니다.\n", player_attackpower);

	return 0;
	
}