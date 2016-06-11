#ifndef LINKLIST_H
#define LINKLIST_H
#include "Node.h"
class linkList 
{ public:
	Node* first;
	Node* last;
	linkList();
	void printList();
	void insertionSort(Node*);

};
#endif