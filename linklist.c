#include <stdio.h>
#include <stdlib.h>
struct list {
	int n;
	struct list *next;
} *head, *node;

void addn();
void deleten();
void viewn();
void view();

int main() {
	char c;
	head = NULL;
	while (c != 'e') {	
		printf ("\na. Add an element\n");
		printf ("b. Delete an element\n");
		printf ("c. View nth element\n");
		printf ("d. View all elements\n");
		printf ("e. Exit\n");
		printf ("Enter a choice : ");
		scanf (" %c", &c);
		if (c == 'a')
			addn();
		else if (c == 'b')
			deleten();
		else if (c == 'c')
			viewn();
		else if (c == 'd')
			view();
	}
}

void addn () {
	int val;
	printf ("Enter the value to be added to the list : ");
	scanf (" %d", &val);
	node = (struct list *) malloc(sizeof(struct list));
	node->n = val;
	node->next = head;
	head = node;
	printf ("Element %d added to the list\n", head->n);
}

void deleten() {
}

void viewn() {
}

void view () {
	printf ("The elements in the list are : ");
	node = head;
	while (node != NULL) {
		printf ("%d ", node->n);
		node = node->next;
	}
	printf ("\n");
}
