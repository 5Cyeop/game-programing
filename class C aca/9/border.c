#include "border.h"



void Border()
{
	printf("бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бс                                    бс\n");
	printf("бсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбсбс\n");

}

void Setcursor(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
