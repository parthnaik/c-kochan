/* Pointers are declared like on line 8. For initialization we use line 10. Using the * before a pointer variable name gives us the value of the variable it points to. */

#include <stdio.h>

int main(void) {
	int x;
	int count = 10;
	int *int_pointer;

	int_pointer = &count;
	x = *int_pointer;

	printf("count = %i, x = %i\n", count, x);

	return 0;
}