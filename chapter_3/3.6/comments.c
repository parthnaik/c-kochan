/* This program adds two integer values and displays the result */
#include <stdio.h>

int main(void)
{
	// Declare variables and assign values
	int sum;
	int value1 = 25;
	int value2 = 50;

	// Calculate sum
	sum = value1 + value2;
	// Display result
	printf("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;
}