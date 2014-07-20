#include <stdio.h>

int main(void) {
	void concat(char result[], const char str1[], const char str[2]);
	const char s1[] = "Test ";
	const char s2[] = "Works.";
	char s3[20];

	concat(s3, s1, s2);

	printf("%s\n", s3);

	return 0;
}

// Function to concat strings

void concat(char result[], const char str1[], const char str2[]) {
	int i, j;

	// copy str1 to result
	for(i = 0; str1[i] != '\0'; i++)
		result[i] = str1[i];

	// copy str2 to result
	for(j = 0; str2[j] != '\0'; j++)
		result[i + j] = str2[j];

	// terminate with null character
	result[i + j] = '\0';
}