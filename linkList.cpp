#include<iostream>
#include "linkList.h"
#include "Node.h"
using namespace std;

linkList::linkList() 
{
	first = nullptr;
	last = first;
}

void linkList::printList()
{
	Node* temp = first->next;
    while(temp!= nullptr) 
    {
    	cout << temp->coef <<"X" <<"^" <<temp->exp;
    	temp = temp->next; 
    }
}