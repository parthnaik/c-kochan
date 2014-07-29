#include <stdio.h>
#include <stdbool.h>

struct entry {
	int value;
	struct entry *previous;
	struct entry *next;
};

int main(void) {
	void traverseList(struct entry *listPointer);	
	struct entry n1, n2, n3;
	struct entry *startListPointer = &n1;
	struct entry *lastListPointer = &n3;

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

	return 0;
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
