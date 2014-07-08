#include <stdio.h>

int main(void)
{
	int n, result = 1;

	printf("Which number do you want to find the factorial of?\n");
	scanf("%i", &n);

	for (int i = n; i > 1; i--)
	{
		result = result * i;
	}

	printf("The factorial of %i is %i\n", n, result);

	return 0;
}