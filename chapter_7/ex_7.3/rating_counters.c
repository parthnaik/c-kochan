#include <stdio.h>

int main(void) {
	int ratingCounters[11], response;

	for (int i = 1; i <= 10; i++)
		ratingCounters[i] = 0;

	printf("Enter your responses\n");

	while (response != 999) {
		scanf("%i", &response);

		if (response == 999)
			break;

		if ((response < 1 || response > 10) && response != 999)
			printf("Bad response\n");
		else
			ratingCounters[response]++;
	}

	printf("\n\nRating\t\tNumber of Responses\n");
	printf("------\t\t-------------------\n");

	for (int i = 1; i <= 10; i++)
		printf("%4i\t    %14i\n", i, ratingCounters[i]);

	return 0;
}