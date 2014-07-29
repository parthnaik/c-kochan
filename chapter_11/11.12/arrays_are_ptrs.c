/* In the previous example, we declared a pointer to in the function and assigned the first variable of the array to it. However, instead we can pass the array as a pointer itself, because the array name resolves to the location of the first element when used as a ptr. */

#include <stdio.h>

int main(void) {
	int arraySum(int *array, const int n);
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

	printf("The sum is %i\n", arraySum(values, 10));

	return 0;
}

int arraySum(int *array, const int n) {
	int sum = 0;
	int * const arrayEnd = array + n;

	for ( ; array < arrayEnd; array++)
		sum += *array;

	return sum;
}