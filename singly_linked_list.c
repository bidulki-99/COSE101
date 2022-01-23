#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	node* next;
}*nodeptr;

void addFirst(nodeptr target, int data) {
	nodeptr newnode = (nodeptr)malloc(sizeof(newnode));
	newnode->next = target->next;
	newnode->data = data;

	target->next = newnode;
}

void removeFirst(nodeptr target) {
	nodeptr removenode = (nodeptr)malloc(sizeof(nodeptr));
	removenode = target->next;
	target->next = removenode->next;
}

void remove(nodeptr head, int data) {
	nodeptr curr = head;
	if (curr->data == data) {
		head = curr->next;
	}

	else {
		while (curr->next != NULL) {
			if (curr->next->data == data) {
				nodeptr removenode = curr->next;
				if (removenode->next != NULL) {
					curr->next = removenode->next;
				}

				else {
					curr->next = NULL;
				}
			}
			curr = curr->next;
		}
	}
}

int main() {
	nodeptr head = (nodeptr)malloc(sizeof(nodeptr));

	head->next = NULL;

	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);
	//removeFirst(head);
	remove(head, 30);

	nodeptr curr = (nodeptr)malloc(sizeof(nodeptr));
	curr = head->next;

	while (curr != NULL) {
		printf("%d --> ", curr->data);
		curr = curr->next;
	}

	printf("NULL\n");
}
