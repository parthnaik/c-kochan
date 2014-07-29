/* Insert n3 between n2 and n4 */
#include <stdio.h>

struct entry {
	int value;
	struct entry *next;
};

int main(void) {
	void insertEntry(struct entry *entryPointer, struct entry *elementPointer);
	struct entry n1, n2, n3, n4;
	struct entry *entryPointer = &n3; // pointer to the list entry to be inserted
	struct entry *elementPointer = &n2; // pointer to element after which entry has to be inserted

	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	n4.value = 400;

	n1.next = &n2;
	n2.next = &n4;
	n4.next = (struct entry *) 0;

	printf("Before insertion n2.next.value: \n");
	printf("%i\n", (*n2.next).value);

	insertEntry(entryPointer, elementPointer);
	printf("After insertion n2.next.value, n3.next.value:\n");
	printf("%i, %i\n", (n2.next)->value, (n3.next)->value);


	return 0;
}

void insertEntry(struct entry *entryPointer, struct entry *elementPointer) {
	struct entry *tempStorage;

	tempStorage = elementPointer->next;
	elementPointer->next = entryPointer;
	entryPointer->next = tempStorage;

}

/* Algorithm:
1. Set tempStorage to point to &n4
2. Set n2.next to point to &n3
3. Set n3.next to point to tempStorage */