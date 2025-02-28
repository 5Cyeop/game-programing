#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	for (int i = 0; i < 10; i++)
	{
		
		int random = rand() % 4 + 1;
		srand(time(NULL));

		printf("%d\n", random);
	}
	return 0;
}