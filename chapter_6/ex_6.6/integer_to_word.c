#include <stdio.h>

int main(void) {
	int uinput, reverse = 0;

	// Get user input
	printf("Enter an integer which you would like to covert into a word\n");
	scanf("%i", &uinput);

	// Reverse the number
	if (uinput == 0)
	{NSLog(@"zero");
	return 0;}
	else
	while (uinput != 0) {
		int rem = uinput % 10;
		uinput /= 10;
		reverse = reverse * 10 + rem;
	}

	// Print number
	while (reverse != 0) {
		int rem = reverse % 10;

		switch (rem) {
			case 1:
				printf("One ");
				break;

			case 2:
				printf("Two ");
				break;

			case 3:
				printf("Three ");
				break;

			case 4:
				printf("Four ");
				break;

			case 5:
				printf("Five ");
				break;

			case 6:
				printf("Six ");
				break;

			case 7:
				printf("Seven ");
				break;

			case 8:
				printf("Eight ");
				break;

 			case 9:
				printf("Nine ");
				break;

			case 0:
				printf("Zero ");
				break;
		}

		reverse = reverse / 10;
	}

	printf("\n");

	return 0;
}
