#include <stdio.h>

int main(void)
{
	char c;

	printf("Please enter a single character: \n");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
		printf("a-z\n");
	else if (c >= 'A' && c <= 'Z')
		printf("A-Z\n");
	else if (c >= '0' && c <= '9')
		printf("0-9\n");
	else
		printf("Special Character\n");

	return 0;
}