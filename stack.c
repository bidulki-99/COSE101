#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode {
	int data;
	struct stackNode* nextPtr;
} StackNode;

typedef StackNode* StackNodePtr;

void push(StackNodePtr topPtr, int info) {
	StackNodePtr newNode = (StackNodePtr)malloc(sizeof(StackNodePtr));
	newNode->nextPtr = topPtr->nextPtr;
	newNode->data = info;

	topPtr->nextPtr = newNode;
}

int pop(StackNodePtr topPtr) {
	StackNodePtr remove = topPtr->nextPtr;
	int popped = topPtr->nextPtr->data;
	topPtr->nextPtr = remove->nextPtr;

	free(remove);
	return popped;
}

int isempty(StackNodePtr topPtr) {
	return topPtr == NULL;
}

void printStack(StackNodePtr currentPtr) {
	printf("The stack is : \n");

	currentPtr = currentPtr->nextPtr;
	while (currentPtr != NULL) {
		printf("%d --> ", currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
	printf("NULL\n\n");
}

void instructions() {
	printf("Enter choice : \n");
	printf("\t 1 to push a value on the stack.\n");
	printf("\t 2 to pop a value off the stack.\n");
	printf("\t 3 to end program.\n");
}

void main() {
	StackNodePtr stackPtr = (StackNodePtr)malloc(sizeof(StackNodePtr));
	int choice;
	int value;

	instructions();
	printf("? ");
	scanf("%d", &choice);

	while (choice != 3) {
		switch (choice) {
		case 1:
			while (!getchar());
			printf("Enter a integer: ");
			scanf("%d", &value);
			push(stackPtr, value);
			printStack(stackPtr);
			break;

		case 2:
			while (!getchar());
			if (!isempty(stackPtr)) {
				printf("The popped value is %d.\n", pop(stackPtr));
				printStack(stackPtr);
			}

			else printf("Stack is empty.");
			break;

		default:
			while (!getchar());
			printf("Invalid choice.\n\n");
			instructions();
			break;
		}
		printf("? ");
		scanf("%d", &choice);
	}
	printf("End of run.\n");
	return;
}
