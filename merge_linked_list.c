#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node* next;
} Node, * NodePtr;

int is_sorted(NodePtr head) {
	NodePtr curr = (NodePtr)malloc(sizeof(NodePtr));
	curr = head;

	while (curr->next != NULL) {
		if (curr->val > curr->next->val)
			return 0;

		curr = curr->next;
	}

	return 1;
}

NodePtr remove_dup(NodePtr x) {
	NodePtr curr1 = (NodePtr)malloc(sizeof(struct node));
	NodePtr curr2 = (NodePtr)malloc(sizeof(struct node));
	curr1 = x;

	while (curr1->next != NULL) {
		curr2 = curr1;

		if (curr1->val == curr2->next->val) {
			curr2->next = curr2->next->next;
		}

		else curr2 = curr2->next;

		curr1 = curr1->next;
	}

	return x;
}

NodePtr merge(NodePtr x, NodePtr y) {
	NodePtr curr1 = (NodePtr)malloc(sizeof(struct node));
	NodePtr curr2 = (NodePtr)malloc(sizeof(struct node));
	NodePtr temp = (NodePtr)malloc(sizeof(struct node));
	curr1 = x;
	curr2 = y;
	x = curr1;
	y = curr2;

	while (curr1->next != NULL && curr2->next != NULL) {
		if (curr1->next->val > curr2->next->val) {
			temp = curr1->next;
			curr1->next = curr2->next;
			curr1 = temp;
			curr2 = curr2->next;
		}

		else {
			curr1 = curr1->next;
		}
	}
	return x;
}

int main() {
	NodePtr head1 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node1 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node2 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node3 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node4 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node5 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node6 = (NodePtr)malloc(sizeof(NodePtr));

	head1->next = node1;
	node1->val = 0;

	node1->next = node2;
	node2->val = 1;

	node2->next = node3;
	node3->val = 3;

	node3->next = node4;
	node4->val = 3;

	node4->next = node5;
	node5->val = 4;

	node5->next = node6;
	node6->val = 5;

	node6->next = NULL;

	NodePtr head2 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node7 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node8 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node9 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node10 = (NodePtr)malloc(sizeof(NodePtr));
	NodePtr node11 = (NodePtr)malloc(sizeof(NodePtr));

	head2->next = node7;
	node7->val = 2;

	node7->next = node8;
	node8->val = 3;

	node8->next = node9;
	node9->val = 4;

	node9->next = node10;
	node10->val = 4;

	node10->next = node11;
	node11->val = 5;

	node11->next = NULL;

	printf("%d\n", is_sorted(head1));

	head1 = remove_dup(head1);
	//head1 = merge(head1, head2);

	NodePtr curr = (NodePtr)malloc(sizeof(NodePtr));
	curr = head1->next;

	while (curr != NULL) {
		printf("%d --> ", curr->val);
		curr = curr->next;
	}
	printf("NULL\n");
}
