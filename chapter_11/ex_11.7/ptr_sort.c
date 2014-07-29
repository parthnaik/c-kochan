#include <stdio.h>

int main(void) {
	void sort(int *a, int n);
	int array[] = { 6, 5, 8, 3, 100 };
	int arrayLength = sizeof(array) / sizeof(int);

	sort(array, arrayLength);

	for (int i = 0; i < arrayLength; i++)
		printf("%i ", array[i]);

	printf("\n");

	return 0;
}

void sort(int *a, int n) {
	int *aptr1, *aptr2, temp;

	for (aptr1 = a; aptr1 < a + n - 1; aptr1++)
		for (aptr2 = aptr1 + 1; aptr2 < a + n; aptr2++)
			if (*aptr1 > *aptr2) {
				temp = *aptr1;
				*aptr1 = *aptr2;
				*aptr2 = temp;
			}
}