#include<iostream>
#include<fstream>
#include "Polynomial.h"
#include "linkList.h"
#include "Node.h"

using namespace std;

int main(int argc, char** argv) {
	if(argc < 1)
		cout <<"File not found" << endl;
	ifstream inputFile(argv[1]);
	//ofstream outputFile(argv[2]);
    int index, value;
    linkList* polynom = new linkList();

	while(inputFile >> value) {
		inputFile >> index;
		Node* term = new Node(value,index);
		polynom->insertionSort(term);
	}
	polynom->printList();

return 0;	
}