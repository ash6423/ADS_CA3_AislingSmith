#pragma once
#include <iostream>
#include <iomanip> 
using namespace std;

//Using class notes from starter code and youtube videos I was able to create a struct of a node and a balanced binary tree, youtube video links are, https://www.youtube.com/watch?v=i0t63WWkfow


template <class T>
//Binary tree node 
struct Node {
	T data;
	Node *left; //pointer to left hand side of the tree
	Node *right;  //pointer to right hand side of the tree
	
	Node(T value) {
		data = value;
		//left = right = NULL;
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





