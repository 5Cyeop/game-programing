#include "random.h"

void Randomseed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	int randValue = rand() % 36 + 1;
	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	int randValue = rand() % 18  + 1;
	return randValue;
}
