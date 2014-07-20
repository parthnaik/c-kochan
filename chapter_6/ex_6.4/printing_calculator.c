#include <stdio.h>

int main(void) {
	int accumulator = 0, number;
	char operation;

	while (operation != 'E') {
		printf("Enter number, operation\n");
		scanf("%i %c", &number, &operation);

		switch(operation) {
			case 'S':
				accumulator = number;
				printf("Accumulator = %i\n", accumulator);
				break;

			case '+':
				accumulator += number;
				printf("Accumulator = %i\n", accumulator);
				break;

			case '-':
				accumulator -= number;
				printf("Accumulator = %i\n", accumulator);
				break;

			case '*':
				accumulator *= number;
				printf("Accumulator = %i\n", accumulator);
				break;

			case '/':
				accumulator /= number;
				printf("Accumulator = %i\n", accumulator);
				break;

			case 'E':
				printf("End program\n");
				break;

			default:
				printf("Invalid operation\n");
				break;
		}
	}

	return 0;
}