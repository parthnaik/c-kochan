#include <stdio.h>

int main(void) 
{
	int val1, val2;

	printf("Type two integers\n");
	scanf("%i %i", &val1, &val2);

	if (val2 == 0)
		printf("Zero is not a valid denominator\n");
	else
		printf("Result = %.3f\n", (float) val1 / val2);

	return 0;
}