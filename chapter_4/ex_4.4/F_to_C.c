#include <stdio.h>

int main(void)
{
	int f;
	float c;

	printf("Enter temperature in F:\n");
	scanf("%i", &f);

	c = (f - 32) / 1.8;

	printf("The temperature in C is:\n");
	printf("%f\n", c);

	return 0;
}