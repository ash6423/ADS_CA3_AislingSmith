//Binary trees as arrays, start by storing it going up then down then left then right

//root = 0
//root->left = 2 root + 1 
//root->right = 2 root + 2
//using a balanced tree 

#include<iostream>
using namespace std;
#define capacity 10 //can also define the capacity in the code below as, int capacity = 0;

//template<class T>
//Was unsure of how to makke a binary tree while using a template so I created it without one.
class BinaryTree{
public:
	int nodes[capacity];
	int numlevels;
	int currentSize;
	BinaryTree(); //constructor
	int getLeft(int);
	int getRight(int);
	int getParent(int);
	bool isEmpty();
	void add(int numLevels);
	//void add(T item); if using a template, would have used a T item to add to the levels.
	void remove();
	void printMyTree();

};

BinaryTree::BinaryTree() { //constructor
	currentSize = 0;
}

int BinaryTree::getLeft(int index) { //specifying return type as an int
	return 2 * index + 1;
}

int BinaryTree::getRight(int index) {
	return 2 * index + 2;
}

int BinaryTree::getParent(int index) {
	return (index-1)/2;
}

bool BinaryTree::isEmpty() {
	if (currentSize == 0) {
		return true;
	}
	else {
		return false;
	}
}

void BinaryTree::remove() {
	
		if (currentSize == 0) {
			return;
			currentSize--; //decrementing size is removing the key, removing a key from a binary tree starts on the right
		}
	
}

void BinaryTree::add(int numLevels) {
	if (currentSize == capacity) {
		return;
	}
	else {
		nodes[currentSize] = numLevels;
		currentSize++;
	}
}

void BinaryTree::printMyTree() {
	for (int i = 0; i < currentSize; i++) {
		cout << nodes[i] << ","; 
	}
}

int main() {
	BinaryTree tree; //creating an instance of the binary tree
	//cout << tree.currentSize << endl; 

	for (int i = 0; i < capacity; i++) {
		tree.add(i);
		tree.printMyTree();
		tree.remove();
		tree.printMyTree();
	}


	return 0;
};