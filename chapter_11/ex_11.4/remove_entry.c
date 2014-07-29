#include <stdio.h>

struct entry {
	int value;
	struct entry *next;
};

int main(void) {
	void removeEntry(struct entry *entryPointer);	
	struct entry *listPointer, n1, n2, n3;

	n1.value = 100;
	n2.value = 200;
	n3.value = 300;

	listPointer = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = (struct entry *) 0;

	printf("Before removal n1.next.value\n");
	printf("%i\n", (*n1.next).value);

	removeEntry(listPointer);

	printf("After removal n1.next.value\n");
	printf("%i\n", (n1.next)->value);

	return 0;
}

void removeEntry(struct entry *entryPointer) {
	struct entry *tempStorage;

	tempStorage = (entryPointer->next)->next;
	entryPointer->next = tempStorage;
}

