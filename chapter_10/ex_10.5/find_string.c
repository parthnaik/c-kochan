#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int findString(const char source[], const char target[]);
	char source[81], target[81];

	printf("Enter source: ");
	scanf("%s", source);

	printf("Enter target: ");
	scanf("%s", target);

	printf("%i\n", findString(source, target));

	return 0;
}

int findString(const char source[], const char target[]) {
	int i = 0, j = 0, index = -1;

	while (source[i] != '\0') {
		while (source[i + j] == target[j]) {
			if (target[i + j] == '\0' && source[i + j + 1] != '\0') {
				index = i;
				break;
			}
			j++;
		}
		i++;
	}
	return index;
}