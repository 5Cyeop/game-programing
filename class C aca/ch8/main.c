#include <stdio.h>

void Main()
{
	printf("test\n");
}

int Mul(int input)
{
	int a = 10;
	return 10 * input;
	printf("%d\n", a);
}

int main()
{
	int result = Mul(5);
	Main();
	printf("%d\n", result);
	return 0;
}