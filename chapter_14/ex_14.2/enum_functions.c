#include <stdio.h>

enum month { january = 1, february, march, april, may, june, july, august, september, october, november, december };

int main(void) {
	char *monthName (enum month aMonth);
	int monthNum;

	printf("Please enter month number\n");
	scanf("%i", &monthNum);

	printf("%s\n", monthName(monthNum));

	return 0;
}

char *monthName (enum month aMonth) {
	static char *monthNames[] = { NULL, 
		"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"
	};

	switch (aMonth) {
		case january:
			return monthNames[1];
		case february:
			return monthNames[2];
		case march:
			return monthNames[3];
		case april:
			return monthNames[4];
		case may:
			return monthNames[5];
		case june:
			return monthNames[6];
		case july:
			return monthNames[7];
		case august:
			return monthNames[8];
		case september:
			return monthNames[9];
		case october:
			return monthNames[10];
		case november:
			return monthNames[11];
		case december:
			return monthNames[12];
		default:
			return "Please enter correct value";
	}
}

