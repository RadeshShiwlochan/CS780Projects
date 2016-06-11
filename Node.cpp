#include<iostream>
#include "Node.h"
using namespace std;

Node::Node() 
{
	coef = 0;
	exp = 0;
	next = nullptr;
}

Node::Node(int coeffnt, int pow) 
{
	coef = coeffnt;
	exp  = pow;
	next = nullptr;
}

void Node::printNode()
{
	cout << coef << " " << exp;
}