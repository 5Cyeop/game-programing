#include "border.h"


int main()
{
	int player_x = 11;
	int player_y = 6;

	Border();
	
	

	while (1)
	{

		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				player_y -= 1;
				if (player_y <= 0)
				{
					player_y += 1;
				//	break;
				}
			}

			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				player_y += 1;
				if (player_y >= 19)
				{
					player_y -= 1;
					//break;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				player_x -= 2;
				if (player_x <= 2)
				{
					player_x += 2;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				player_x += 2;
				if (player_x >= 36)
				{
					player_x -= 2;
				}
			}

			else 
			{

			}
		}


		Setcursor(player_x, player_y);
		printf("бр");
		Sleep(80);
	}


}