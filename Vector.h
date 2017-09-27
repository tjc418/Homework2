#include <iostream>
#include <fstream>
#include <string>
#include "general.h"
using namespace std;

struct Vector
		{
			int size;	//sizeber of elements
			double* buf; 	//buffer used to store the data.
		} ;
//Implement the following functions:
	bool Read(const string& filename, Vector& A);	//read the data from a file and create a Vector A;
													//if A has data already, delete them first.
													//return false if error occurs
	bool Write(const string& filename, const Vector& A);	//write the Vector data to a file;
													//return false if error occurs
													//refer to Read()
	bool Assign (Vector& A,const Vector& B); //assign B to A, if A has data, delete them first
								      //return false if error occurs
	bool Equal(const Vector& A,const  Vector& B); //compare the two, return ture if they are equal to each other, otherwise return false;

	bool Add(const Vector&  A,const Vector& B, Vector& C);   // C=A+B

	bool Subtract(const Vector& A,const Vector& B, Vector& C);    //C=A-B

	bool Multiply(double a,const Vector& B,Vector& C);     //C=a*B;

	double Multiply(const Vector& A, const Vector& B); 	//Dot product

	void Initialize(Vector& A);

	void Clear(Vector& A);  //remove all the data from the Vector.

	void Reverse(Vector& A); //reverse the components in the vector
	
	bool Remove(Vector& A, double b); //remove a component in the vector, 
										//reuturn true if successful, otherwise false.
	bool Remove(Vector& A, int location=0); //remove a component at the location
										//return true if successful, otherwise false
	bool Insert(Vector& A, double b, int location=0); //insert a component into the vector
													//return true if successful, otherwise false
	void Sort(Vector& A, bool Ascending=true); //sort Vector A, default is ascending, false descending 
												//Vector may contain large amount of data, sorting could be SLOW!
												//how can you speed up the sorting process?
	void Unit(Vector& A); //Make Vector A unit vector of A. A->|A|=1

	bool IsUnit(const Vector& A);  //check if Vector is Unit Vector |A|=1?
