#include <stdio.h>
#include <stdbool.h>

struct date {
	int month;
	int day;
	int year;
};

int main(void) {
	void dateUpdate(struct date *today);
	struct date d;
	struct date *datePtr = &d;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &d.month, &d.day, &d.year);

	dateUpdate(datePtr);

	printf("Tommorow's date is: \n");
	printf("%i-%i-%i\n", d.month, d.day, d.year);

	return 0;
}

void dateUpdate(struct date *today) {
	int numberOfDays (struct date d);

	if (today->day != numberOfDays(*today))
		today->day++;
	else if (today->month == 12) {
		today->day = 1;
		today->month = 1;
		today->year++;
	}
	else {
		today->day = 1;
		today->month++;
	}
}

// Function to find number of days in a month
int numberOfDays(struct date d) {
	int days;
	bool isLeapYear(struct date d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}