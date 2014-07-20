#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int strToInt(const char string[]);
	char strInt[81];

	printf("Enter string value to convert to integer (positive or negative)\n");
	scanf("%s", strInt);

	printf("The integer value is %i\n", strToInt(strInt));

	return 0;
}

int strToInt(const char string[]) {
	int intValue;
	int i = 0, negative = false, result = 0;

	// test for leading minus sign
	if (string[0] == '-') {
		negative = true;
		i = 1;
	}

	while (string[i] >= '0' && string[i] <= '9') {
		intValue = string[i] - '0';
		result = result * 10 + intValue;
		i++;
	}

	if (negative)
		result = -result;

	return result;
}