#include <stdio.h>

int main(void) {
	char c = 'X';
	char d = 'Y';

	/* In this case charPtr address cannot be changed to point to something else i.e. charPtr = &d is an invalid operation. However, we can still change the value of c using the pointer. */
	char * const charPtr = &c;
	// Uncomment to see effect
	// charPtr = &d; // Invalid

	/* In this case charPtr2 points to a constant character i.e. we cannot change the value of c via charPtr2. Value can still be changed by directly referencing character c */
	char const *charPtr2 = &c;
	// Uncomment to see effect
	// *charPtr2 = d; // Invalid

	return 0;
}