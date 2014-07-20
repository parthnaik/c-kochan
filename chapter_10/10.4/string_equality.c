#include <stdio.h>
#include <stdbool.h>

int main(void) {
	bool equalStrings(const char s1[], const char s2[]);

	const char stra[] = "string compare test";
	const char strb[] = "string";

	printf("%i\n", equalStrings(stra, strb));
	printf("%i\n", equalStrings(stra, stra));
	printf("%i\n", equalStrings(strb, "string"));

	return 0;
}

bool equalStrings(const char s1[], const char s2[]) {
	int i = 0;
	bool isEqual;

	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	if (s1[i] == '\0' && s2[i] == '\0')
		isEqual = true;
	else
		isEqual = false;
	
	return isEqual;
}