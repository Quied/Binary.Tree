#include <iostream>
#include <vector>
#include "Header.h"

int main() {
	srand(time(NULL));

	Tree *tree = nullptr;

	std::vector<int>Vec{7,5,3,9,2,1,8,4};

	for (auto el : Vec) tree->push(el, tree);

	tree->print(tree);

	tree->DeleteTree(tree);

}