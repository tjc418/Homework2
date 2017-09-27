#include <iostream>
#include <fstream>
#include <string>
#include "general.h"
#include "Vector.h"
using namespace std;

//Implement the following functions:
	bool Read(const string& filename, Vector& A)	//read the data from a file and create a Vector A;
													//if A has data already, delete them first.
													//return false if error occurs
	{
		cout<<"Reading data from: "<<filename<<endl;
		ifstream ins(filename.c_str());
		BypassComment(ins);//skip comments
		
		//do NOT forget to close the file
		ins.close();//
		return true;
	}
	bool Write(const string& filename, const Vector& A)	//write the Vector data to a file;
													//return false if error occurs
													//refer to Read()
	{
			return true;
	}
	bool Assign (Vector& A,const Vector& B) //assign B to A, if A has data, delete them first
								      //return false if error occurs
	{
		//what if Vector A has data?
		return true;
	}
	bool Equal(const Vector& A,const  Vector& B) //compare the two, return ture if they are equal to each other, otherwise return false;
	{
		//Please note that if two floating point sizebers are compared, you may get wrong result!

		return true;
	}
	bool Add(const Vector&  A,const Vector& B, Vector& C)// C=A+B
	{
		return true;
	};

	bool Subtract(const Vector& A,const Vector& B, Vector& C)//C=A-B
	{
		return true;
	}
	bool Multiply(double a,const Vector& B,Vector& C) //C=a*B;
	{
		return true;
	}
	double Multiply(const Vector& A, const Vector& B)  //dot product
	{
		double sum=0.0;

		return sum;
	}

	void Initialize(Vector& A)
	{
		A.size=0;//
		A.buf=NULL;//pointing to nothing
	}
	void Clear(Vector& A)  //remove all the data from the Vector.
	{
		A.size=0;//
		if(A.buf) delete[] A.buf;		
		A.buf=NULL;//pointing to nothing
	}
	void Reverse(Vector& A)
	{
			
	}
	bool Remove(Vector& A, double b)
	{

		return true;
	}
	bool Remove(Vector& A, int location)
	{

		return true;
	}	bool Insert(Vector& A, double b, int location)
	{
		return true;
	}
	void Sort(Vector& A, bool Ascending)
	{
		
	}
	void Unit(Vector& A)
	{
		
	}
	bool IsUnit(const Vector& A)
	{
		return true;
	}
