#include "border.h"
#include "random.h"

void Setcursor(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main()
{
	Border();
	Randomseed();
	int player_x = 10;
	int player_y = 6;
	int point_x = 10;
	int point_y = 10;
	int score_point = 0;
	int second = 30;
	
	setCursorVisible(false);
	

	while (1)
	{

		if (_kbhit())
		{
			Setcursor(player_x, player_y);
			printf("  ");

			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				player_y -= 1;
				if (player_y <= 0)
				{
					player_y += 1;
					break;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				player_y += 1;
				if (player_y >= 19)
				{
					player_y -= 1;
					break;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				player_x -= 2;
				if (player_x <= 0)
				{
					player_x += 2;
					break;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				player_x += 2;
				if (player_x >= 38)
				{
					player_x -= 2;
					break;
				}
			}

			else
			{

			}
		}



		Setcursor(player_x, player_y);
		printf("¡à");

		Setcursor(60, 0);
		printf("score: %d", score_point);

		Setcursor(point_x, point_y);
		printf("¡Ú");




		if (player_x == point_x && player_y == point_y)
		{
			score_point++;
			point_x = ReturnPosX();
			point_y = ReturnPosY();
			Setcursor(point_x, point_y);
			printf("¡Ú");
			
			second += 100;
		}

		
		Setcursor(60, 2);
		printf("time: %d", second);

		if (second > 0)
			second--;

		else
			break;

		


		Sleep(50);
	}


}