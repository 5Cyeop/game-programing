#include "border.h"



void Border()
{
	printf("���������������������\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("��                                    ��\n");
	printf("���������������������\n");

}

void Setcursor(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
