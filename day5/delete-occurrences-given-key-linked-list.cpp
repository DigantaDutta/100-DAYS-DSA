
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* push(Node* head, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
	return head;
}

Node* deleteKey(Node* head, int x)
{
	if (!head)
		return head;
	while (head && head->data == x)
		head = head->next;
	Node *curr = head, *prev = nullptr;

	while (curr) {
		if (curr->data == x)
			prev->next = curr->next;
		else
			prev = curr;
		curr = curr->next;
	}
	return head;
}


void printList(Node* node)
{
	while (node) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{

	Node* head = NULL;
	head = push(head, 7);
	head = push(head, 2);
	head = push(head, 3);
	head = push(head, 2);
	head = push(head, 8);
	head = push(head, 1);
	head = push(head, 2);
	head = push(head, 2);

	int key = 2;
	cout << "Created Linked List:\n ";
	printList(head);
	head = deleteKey(head, key);

	if (!head)
		cout << "\nNo element present in the Linked list"
			<< endl;
	else {
		cout << "\nLinked List after Deletion is:\n";
		printList(head);
	}
	return 0;
}

