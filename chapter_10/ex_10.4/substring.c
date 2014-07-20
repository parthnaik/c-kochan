#include <stdio.h>

int main(void) {
	void substring(const char source[], const int start, const int count, char result[]);
	char source[81], result[81];
	int start, count;

	printf("Enter string: ");
	scanf("%s", source);

	printf("Enter the start and count: ");
	scanf("%i%i", &start, &count);

	substring(source, start, count, result);

	printf("The extracted substring from %s is %s\n", source, result);

	return 0;
}

void substring(const char source[], const int start, const int count, char result[]) {
	int j = 0;

	for (int i = start; i < start + count && source[i] != '\0'; i++) {
		result[j] = source[i];
		j++;
	}

	result[j] = '\0'; // insert null character	
}