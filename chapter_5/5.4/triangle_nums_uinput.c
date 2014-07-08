#include <stdio.h>

int main(void) 
{
	int uinput, triangularNumber = 0;

	printf("Enter the trianglular the number you want to print: \n");
	scanf("%i", &uinput);

	for (int n = 1; n <= uinput; n++)
	{
		triangularNumber += n;
	}

	printf("The %ith triangular number is: %i\n", uinput, triangularNumber);

	return 0;
}