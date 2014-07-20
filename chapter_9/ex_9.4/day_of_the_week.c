#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main(void) {
	struct date getDate(void);
	int calculateN(struct date d);
	int getDay(struct date d);

	const char *dayOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int day;
	struct date d;

	printf("Enter date to get the day of the week: \n");
	d = getDate();

	day = getDay(d);

	printf("The day of the week is: %s\n", dayOfWeek[day]);

	return 0;
}

int getDay(struct date d) {
	int calculateN(struct date d);

	int dayOfWeek;

	dayOfWeek = (calculateN(d) - 621049) % 7;

	return dayOfWeek;
}

struct date getDate(void) {
	struct date d;

	printf("Enter date in the format (mm dd yyyy) without preceding 0s\n");
	scanf("%i%i%i", &d.month, &d.day, &d.year);

	return d;
}

int calculateN(struct date d) {
	int funcYearAndMonth(int year, int month);
	int funcMonth(int month);

	int n = (1461 * funcYearAndMonth(d.year, d.month)) / 4 + (153 * funcMonth(d.month)) / 5 + d.day;

	return n;
}

int funcYearAndMonth(int year, int month) {
	if (month <= 2)
		return (year - 1);
	else
		return year;
}

int funcMonth(int month) {
	if (month <= 2)
		return (month + 13);
	else
		return (month + 1);
}