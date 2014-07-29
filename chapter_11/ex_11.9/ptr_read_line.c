#include <stdio.h>

int main(void) {
	void readLine(char *buffer);
	char line[81];

	readLine(line);

	printf("\n");
	printf("The inputted string is: \n");
	printf("%s\n", line);

	return 0;
}

void readLine(char *buffer) {		
	char character;

	do {
		character = getchar();
		*buffer++ = character;
	} while (character != '\n');

	*buffer = '\0'; // end line
}