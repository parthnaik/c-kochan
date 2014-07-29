/* When pointers are passed to a function, a copy of the pointer is passed. Therefore, the indirect reference value can be changed but the variable to which the pointer points cannot be changed. */

#include <stdio.h>

int main(void) {
	void test(int *int_pointer);
	int i = 50, *p = &i;

	printf("Before the call to test i = %i\n", i);
	
	test(p);
	printf("After the call to test i = %i\n", i);

	return 0;
}

void test(int *int_pointer) {
	*int_pointer = 100;
}