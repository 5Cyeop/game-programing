#include "lecture.h"

void LocalFunc(int a)
{
	int value = 5;
	printf("%d\n", a + value);
}


void ShowExample()
{
	int num = 10;
	printf("%d\n", num);

	LocalFunc(10);

}

