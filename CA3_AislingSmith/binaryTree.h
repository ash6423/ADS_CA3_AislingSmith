#pragma once
#include <iostream>
#include <iomanip> 
using namespace std;

//Using class notes from starter code and youtube videos I was able to create a struct of a node and a balanced binary tree, youtube video links are, https://www.youtube.com/watch?v=i0t63WWkfow

//Binary tree node 
struct Node {
	int key;
	struct Node* left; //pointer to left hand side of the tree
	struct Node* right;  //pointer to right hand side of the tree

	Node(int value) {
		key = value; //the varible value is the key in the binary tree
	
		left = NULL;
		right = NULL;
	}

};

template <class T>
class BinaryTree
{
public:
	BinaryTree();
	BinaryTree(int numLevels);
	void add(T item);
	void remove();
	~BinaryTree();
};

int main() {
	struct Node* root = new Node(1); //creating root node on the binary tree 

	//creating branches(children) to the left and right of the root node.
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4); //creating the first node on the lower left side of the tree.
	root->left->right = new Node(5); //creating the node on the left side of the tree to the right.

	root->right->left = new Node(6); //creating the first node on the lower side of the right handside of the tree
	root->right->right = new Node(7); //creating the last node of a balanced binary tree, on the lower right handside of the tree.

};




