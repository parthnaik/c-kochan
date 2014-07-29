#include <stdio.h>

int main(void) {
	int result;
	int compareStrings(char *s1, char *s2);
	char s1[81], s2[81];
	char *strPtr1, *strPtr2;

	printf("Please enter first string\n");
	scanf("%s", s1);

	printf("Please enter second string\n");
	scanf("%s", s2);

	result = compareStrings(s1, s2);

	if (result == -1)
		printf("string1 < string2\n");
	else if (result == 0)
		printf("string1 = string2\n");
	else
		printf("string1 > string2\n");

	return 0;
}

int compareStrings(char *s1, char *s2) {
	int i = 0;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
		s1++;
		s2++;
	}

	if (*s1 < *s2)
		return -1;
	else if (*s1 == *s2)
		return 0;
	else
		return 1;
}