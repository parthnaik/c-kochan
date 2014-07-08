#include <stdio.h>

int main(void)
{
	float result, x = 2.55;

	result = 3 * (x * x * x) + 5 * (x * x) + 6;
	printf("The result is: %f\n", result);

	return 0;
}