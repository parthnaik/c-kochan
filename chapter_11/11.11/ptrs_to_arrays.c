/* The int * const arrayEnd signifies that the arrayEnd pointer is a constant and the address it points to cannot be changed i.e. arrayEnd = &d would be an invalid operation. If it was declared as int const *arrayEnd, it would mean that the value to which it points is constant and an assignment like *arrayEnd = 3 would be invalid. */

/* When an array is passed to a ptr by it's name, it resolved to the address of the first element in the array. So, for example if we write the statement *pointer = arrayName, it resolves to *pointer = &arrayName[0] */

#include <stdio.h>

int main(void) {
	int arraySum(int array[], const int n);
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf("The sum is %i\n", arraySum(values, 10));

	return 0;
}

int arraySum(int array[], const int n) {
	int sum = 0, *ptr;
	int * const arrayEnd = array + n;

	for (ptr = array; ptr < arrayEnd; ptr++)
		sum += *ptr;

	return sum;
}