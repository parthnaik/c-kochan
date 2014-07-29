#include <stdio.h>

int main(void) {
	int stringLength(const char *string);

	printf("%i\n", stringLength("stringLength test"));
	printf("%i\n", stringLength(""));
	printf("%i\n", stringLength("complete"));

	return 0;
}

int stringLength(const char *string) {
	const char *cptr = string;

	while (*cptr)
		cptr++;

	return cptr - string;
}