#include <stdio.h>
#include <stdbool.h>

int main(void) {
	void removeString(char source[], int start, const int count);
	void readLine(char buffer[]);
	int start, count;
	char source[81];

	printf("Enter source: ");
	readLine(source);

	printf("Enter start and count for removal: ");
	scanf("%i%i", &start, &count);

	removeString(source, start, count);

	printf("The modified string is: %s\n", source);

	return 0;
}

void removeString(char source[], const int start, const int count) {
	char temp[81];
	int i, j;

	for (i = start + count, j = 0; source[i] != '\0'; i++, j++) {
		temp[j] = source[i];
	}

	for (i = start, j = 0; temp[j] != '\0'; i++, j++) {
		source[i] = temp[j];
	}

	source[i] = '\0';
}

void readLine(char buffer[]) {
	char character;
	int i = 0;

	do {
		character = getchar();
		buffer[i] = character;
		i++;
	} while(character != '\n');

	buffer[i - 1] = '\0';
}