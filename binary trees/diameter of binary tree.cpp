
#include<iostream>
#include<cmath>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};


node* buildTree() {

	int data;
	cin >> data;

	// base case

	if(data == -1) {
		// construct an empty tree and return pointer to its root node
		return NULL;
	}

	// recursive case

	// 1. construct the root data using the first value of the given preOrder traversal

	node* root = new node(data);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();

	return root;

}

int computeHeight(node* root) {

	// base case
	if(!root) { // root == NULL
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

int computeDiameter(node* root) {

	// base case
	if(!root) {
		// diameter of an empty tree
		return 0;
	}

	// recursive case

	// 1. ask your friend for the diameter of the leftSubtree
	int dL = computeDiameter(root->left);

	// 2. ask your friend for the diameter of the rightSubtree
	int dR = computeDiameter(root->right);

	// 3. cal. the length of the longest path between any two nodes that passes through the root node
	int rD = computeHeight(root->left) + 2 + computeHeight(root->right);

	return max({dL, dR, rD});

}

class Pair {
	public :

		int height;
		int diameter;
};


Pair computeDiameterEfficient(node* root) {

	Pair p;

	// base case
	if(!root) { // root == NULL
		p.diameter = 0;
		p.height = -1;
		return p;
	}

	// recursive case

	// 1. ask your friend to compute the diameter and height of the leftSubtree
	Pair pL = computeDiameterEfficient(root->left);

	// 2. ask your friend to compute the diameter and height of the rightSubtree
	Pair pR = computeDiameterEfficient(root->right);

	// 3. compute the length of the longest path through the root node
	int rD = pL.height + 2 + pR.height;

	p.height = 1 + max(pL.height, pR.height);
	p.diameter = max({pL.diameter, pR.diameter, rD}); // max(pL.diameter, max(pR.diameter, rD));

	return p;

}


int main() {

	node* root = buildTree();

	// cout << computeDiameter(root) << endl;

	cout << computeDiameterEfficient(root).diameter << endl;

	return 0;
}
