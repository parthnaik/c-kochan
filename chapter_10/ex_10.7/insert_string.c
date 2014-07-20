#include <stdio.h>

int main(void) {
	void readLine(char buffer[]);
	void insertString(char source[], const char insertion[], const int position);
	char source[81], insertion[81];
	int position;

	printf("Enter source: ");
	readLine(source);

	printf("Enter insertion string: ");
	readLine(insertion);

	printf("Enter insertion position: ");
	scanf("%i", &position);

	insertString(source, insertion, position);

	printf("The modified string is: \n");
	printf("%s\n", source);

	return 0;
}

void insertString(char source[], const char insertion[], const int position) {
	char temp[81];
	int i, j;

	// store string at and after insertion point in a temporary variable
	for (i = position, j = 0; source[i] != '\0'; i++, j++)
		temp[j] = source[i];

	// insert string at desired position
	for (i = position, j = 0; insertion[j] != '\0'; i++, j++)
		source[i] = insertion[j];

	// add previously stored string back to source
	for (j = 0; temp[j] != '\0'; i++, j++)
		source[i] = temp[j];
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