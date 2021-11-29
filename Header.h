#pragma once
#include <iostream>

struct Tree{
private:
	double data;
	Tree* LEFT = nullptr;
	Tree* RIGHT = nullptr;

public:
	Tree(double _data) : data(_data), LEFT(nullptr), RIGHT(nullptr){}
	Tree(){}

	void push(double x, Tree *&tree) {

		if (!tree) {
			tree = new Tree(x);
			return;
		}
		else if (tree->data > x) {
			push(x, tree->LEFT);
		}
		else {
			push(x, tree->RIGHT);
		}
	}

	void DeleteTree(Tree *tree) {
		if (!tree) return;

		DeleteTree(tree->LEFT);
		DeleteTree(tree->RIGHT);

		delete tree;
		return;
	}

	bool CHECK = true;
	int step = 10;
	void print(Tree* tree) {	 
		if (!tree) return;
		for (int i = 0; i < step; i++) std::cout << " ";
		std::cout << tree->data << std::endl;

		step--;
		print(tree->LEFT);

		step++;
		step++;
		print(tree->RIGHT);
	}

	void pop(double x, Tree* tree) {

	}

	
};

