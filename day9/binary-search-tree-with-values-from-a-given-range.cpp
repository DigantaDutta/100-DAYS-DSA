#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int val;
	Node *left, *right;
};

Node* newNode(int item)
{
	Node* temp = new Node();
	temp->val = item;
	temp->left = temp->right = NULL;

	return temp;
}

int sum = 0;

int rangeSumBST(Node* root, int low,
				int high)
{
	if (root == NULL)
		return 0;

	queue<Node*> q;

	q.push(root);

	while (q.empty() == false) {

		Node* curr = q.front();
		q.pop();

		if (curr->val >= low
			&& curr->val <= high) {

			sum += curr->val;
		}

		if (curr->left != NULL
			&& curr->val > low)

			q.push(curr->left);

		if (curr->right != NULL
			&& curr->val < high)

			q.push(curr->right);
	}

	return sum;
}


Node* insert(Node* node, int data)
{
	if (node == NULL)
		return newNode(data);

	if (data <= node->val)

		node->left = insert(node->left,
							data);

	else

		node->right = insert(node->right,
							data);

	return node;
}

int main()
{

	Node* root = NULL;
	root = insert(root, 10);
	insert(root, 5);
	insert(root, 15);
	insert(root, 3);
	insert(root, 7);
	insert(root, 18);

	int L = 7, R = 15;
	cout << rangeSumBST(root, L, R);

	return 0;
}
