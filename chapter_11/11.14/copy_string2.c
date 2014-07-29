/* Pre-increment operators increment the variable before assignment whereas, post-increment operation increment the variable post assignment. */

/* In this case, statement 23 works as follows: The *from is resolved first and then from is incremented. Then *to is assigned the value of the resolves *from. Then to is incremented. This continues until the loop is satisfied. */

#include <stdio.h>

int main(void) {
	void copyString(char *to, char *from);
	char string1[] = "A string to be copied.";
	char string2[50];

	copyString(string2, string1);
	printf("%s\n", string2);

	copyString(string2, "So this is.");
	printf("%s\n", string2);	

	return 0;
}

void copyString(char *to, char *from) {
	while (*from)
		*to++ = *from++;

	*to = '\0';
}