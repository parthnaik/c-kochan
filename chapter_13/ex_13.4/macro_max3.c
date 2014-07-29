#include <stdio.h>

#define MAX2(a, b) ((a) > (b) ? (a) : (b))
#define MAX3(a, b, c) MAX2(MAX2(a, b), c)

int main(void) {
	int a, b, c, max;

	printf("Enter 3 values to find the maximum of:\n");
	scanf("%i %i %i", &a, &b, &c);

	max = MAX3(a, b, c);

	printf("The max value is %i\n", max);

	return 0;
}