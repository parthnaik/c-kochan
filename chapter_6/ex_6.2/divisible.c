#include <stdio.h>

int main(void) 
{
	int val1, val2;

	printf("Type two integers\n");
	scanf("%i %i", &val1, &val2);

	if (val1 % val2 == 0)
		printf("First integer is divisible by the second integer\n");
	else
		printf("First integer is not divisible by the second integer\n");

	return 0;
}