#include <stdio.h>

unsigned long int factorial(unsigned int number) {
	unsigned long int result;

	if (number == 0)
		return 1;	
	else
		result = number * factorial(number - 1);

	return result;
}

int main(void) {
	unsigned long int factorial(unsigned int number);
	unsigned int number;
	unsigned long int fact;

	printf("Enter number to get factorial:\n");
	scanf("%i", &number);

	fact = factorial(number);
	printf("The factorial of %i is %lu\n", number, fact);

	return 0;
}