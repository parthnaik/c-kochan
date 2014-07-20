#include <stdio.h>

int main(void) {
	int fibonacci[15];

	// define first two numbers
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int n = 2; n < 15; n++) {
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
	}

	for (int i = 0; i < 15; i++) {
		printf("%i\n", fibonacci[i]);
	}

	return 0;
}