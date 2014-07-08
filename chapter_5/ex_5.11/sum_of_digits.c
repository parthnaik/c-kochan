#include <stdio.h>

int main(void)
{
	int sum = 0, n;
	int store;

	printf("Enter a number of which you would like to calculate the sum of digits\n");
	scanf("%i", &n);
	store = n;

	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}

	printf("The sum of digits of %i is %i\n", store, sum);

	return 0;
}