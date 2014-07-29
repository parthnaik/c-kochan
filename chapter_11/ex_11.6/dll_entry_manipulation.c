#include <stdio.h>
#include <stdbool.h>

struct entry {
	int value;
	struct entry *previous;
	struct entry *next;
};

int main(void) {
	void traverseList(struct entry *listPointer);	
	void removeEntry(struct entry *listPointer);
	void insertEntry(struct entry *listPointer, struct entry *entryPointer);
	struct entry n1, n2, n3;
	struct entry *startListPointer = &n1;
	struct entry *lastListPointer = &n3;
	struct entry *n2Pointer = &n2;

	n1.value = 100;
	n1.previous = (struct entry *) 0;
	n1.next = &n2;

	n2.value = 200;
	n2.previous = &n1;
	n2.next = &n3;

	n3.value = 300;
	n3.previous = &n2;
	n3.next = (struct entry *) 0;

	printf("First element to last traversal:\n");
	traverseList(startListPointer);

	printf("\n");

	printf("Last element to first traversal:\n");
	traverseList(lastListPointer);

	printf("\n");

	removeEntry(n2Pointer);
	printf("Traversal after removal of n2:\n");
	traverseList(startListPointer);

	printf("\n");

	insertEntry(startListPointer, n2Pointer);
	printf("Traversal after insertion of n2:\n");
	traverseList(startListPointer);

	return 0;
}

void removeEntry(struct entry *listPointer) {
	struct entry *previousEntry = listPointer->previous;
	struct entry *nextEntry = listPointer->next;

	listPointer->previous->next = nextEntry;
	listPointer->next->previous = previousEntry;
}

void insertEntry(struct entry *listPointer, struct entry *entryPointer) {
	// Set pointers for entry first
	entryPointer->previous = listPointer;
	entryPointer->next = listPointer->next;

	// Set pointers for the entries behind and ahead of the entry
	if (entryPointer->previous != (struct entry *) 0)
		entryPointer->previous->next = entryPointer;

	if (entryPointer->next != (struct entry *) 0)
		entryPointer->next->previous = entryPointer;
}

void traverseList(struct entry *listPointer) {
	bool checkTraversalForward(struct entry *listPointer);
	bool forwardTraversal = checkTraversalForward(listPointer);

	do {
		printf("%i\n", listPointer->value);

		if (forwardTraversal)
			listPointer = listPointer->next;
		else if (!forwardTraversal)
			listPointer = listPointer->previous;
		else
			printf("Something's wrong. Please check that the initialize pointers are set correctly!\n");

	} while (listPointer != (struct entry *) 0);
}

bool checkTraversalForward(struct entry *listPointer) {
	if (listPointer->previous == (struct entry *) 0)
		return true;
	else
		return false;
}
