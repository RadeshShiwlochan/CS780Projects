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
    int index, value, counter,max;
    int numsFromFile[100];
    linkList* polynom = new linkList();

	while(inputFile >> value) {
		cout << "this inside the loop" << endl;
		inputFile >> index;
		cout << "This is value " << value << endl;
		cout << "This is index " << index << endl;
		Node* term = new Node(value,index);
		term->printNode();
		cout << endl;
	}
    cout << "End of loop" << endl;
   
	
}