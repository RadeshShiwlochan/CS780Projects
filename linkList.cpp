#include<iostream>
#include "linkList.h"
#include "Node.h"
using namespace std;

linkList::linkList() 
{
	first = new Node(-9999,-9999);
	last = first;
}

void linkList::printList()
{
	Node* temp = first->next;
    while(temp!= nullptr) 
    {   if(temp->coef != 0 && temp->exp == 0)
    		cout << temp->coef;
    	else if(temp->coef != 0)
    		cout << temp->coef <<"X"; 
    	if(temp->exp != 0)
    		cout<<"^" <<temp->exp;
    	temp = temp->next;
    	if(temp!= nullptr && temp->coef > 0)
    		cout <<"+"; 
    }
}

void linkList::insertionSort(Node* item) 
{
	Node* temp = first;
	while(temp->next!= nullptr && temp->next->exp <= item->exp)
	{
		temp = temp->next;
	}
	item->next = temp->next;
	temp->next = item;
}