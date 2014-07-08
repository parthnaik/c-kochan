#include <stdio.h>

int main(void) 
{
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n\tSum from 1 to n\n");
	printf("---\t---------------\n");

	int triangularNumber = 0;

	for (int n = 1; n <= 10; n++)
	{
		triangularNumber += n;
		printf("%2i\t\t%i\n", n, triangularNumber);
	}

	return 0;
}