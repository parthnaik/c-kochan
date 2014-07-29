/* If initialization is required at the same time as declaration, we can do as illustrated on line 7. Notice the difference, the initialization is done with the * before the pointer name this time. */

#include <stdio.h>

int main(void) {
	char c = 'Q';
	char *char_pointer = &c;

	printf("%c %c\n", c, *char_pointer);

	c = '/';
	printf("%c %c\n", c, *char_pointer);

	*char_pointer = '(';
	printf("%c %c\n", c, *char_pointer);	

	return 0;
}