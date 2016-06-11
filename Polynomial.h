#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include<iostream>
using namespace std;

class Polynomial 
{ public:
     int exp;
     int coeff;
     int* polyArray;
     int size;

     Polynomial();
     Polynomial(int*, int);
     ~Polynomial();
     Polynomial add(Polynomial);
     Polynomial sub(Polynomial);
     Polynomial mult(Polynomial); 
     void print();  
	
};

#endif