#ifndef NODE_H
#define NODE_H
class Node {
	public:
		int coef;
		int exp;
		Node* next;

		Node();
		Node(int,int);
		~Node();
		void printNode();
};
#endif