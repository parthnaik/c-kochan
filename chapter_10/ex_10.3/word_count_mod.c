#include <stdio.h>
#include <stdbool.h>

int main(void) {
	const char text1[] = "Works with number commas 111,111.";
	const char text2[] = "And works with apostrophes, ain't it?";
	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));

	return 0;
}

bool checkIfAlphabetic(const char c) {
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}

bool checkIfNumber(const char c) {
	if ( (c >= '1' && c <= '9'))
		return true;
	else
		return false;
}

bool checkIfApostrophe(const char c) {
	if (c == '\'')
		return true;
	else
		return false;
}

bool checkIfComma(const char c) {
	if (c == ',')
		return true;
	else
		return false;
}

int countWords(const char string[]) {
	int i;
	int wordCount = 0;
	bool lookingForWord = true, checkIfAlphabetic(const char c), checkIfNumber(const char c), checkIfApostrophe(const char c), checkIfComma(const char c);

	for (i = 0; string[i] != '\0'; i++)
		if (checkIfAlphabetic(string[i]) || checkIfNumber(string[i])) {
			if (lookingForWord == true) {
				wordCount++;
				lookingForWord = false;
			}
		}
		else if (checkIfApostrophe(string[i])) // ignore apostrophes
			lookingForWord = false;
		else if (checkIfComma(string[i])) // ignore commas
			lookingForWord = false;
		else
			lookingForWord = true;

	return wordCount;
}