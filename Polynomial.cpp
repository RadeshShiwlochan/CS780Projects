#include<iostream>
#include "Polynomial.h"

Polynomial::Polynomial() 
{
	exp = 0;
	coeff = 0;
	size = 0;
}

Polynomial::Polynomial(int* array,int sze) 
{
	polyArray = new int[(sze+1)]();
	for(int i = 0; i < (sze+1); i++) 
	{
		if(array[i] == 0)
			continue;
		else 
		{
			polyArray[i] = array[i];
			coeff = polyArray[i];
			exp = i;
		}
	}
	size = sze + 1;
}

Polynomial Polynomial::add(Polynomial operand) 
{
	Polynomial result;
	for(int i = 0; i < size; i++) {
		result.polyArray[i] = this->polyArray[i] + operand.polyArray[i];
	}
	return result;
}

void Polynomial::print() 
{
	for(int i = 0; i < size; i++)
		cout << polyArray[i] << "X" <<"^" << i << " + ";
	cout << endl;
}

Polynomial::~Polynomial() 
{
	delete [] polyArray;
}