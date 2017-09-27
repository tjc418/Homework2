#include "Vector.h"
#include <fstream>
using namespace std;

int main(int argc, char * argv[]) 
{
	Vector A={0,NULL};
	Initialize(A);
	Vector B={0,NULL};
	Initialize(B);
	Vector C={0,NULL};//
	Initialize(C);
	Vector D={0,NULL};//
	Initialize(D); //initialize the matrices before using them.
	Vector E={0,NULL};
	Initialize(E);
	Vector L={0,NULL};
	Initialize(L);
	Vector U={0,NULL};
	Initialize (U);


	int err=0;
	if (!Read(argv[1],A)) exit (-1) ;//read data from a.data
	if (!Read(argv[2],B)) exit (-1);//read data from b.data
	//test ==
	if (Equal(A,B))
		{
			cout<<"Failure testing Equal"<<endl;
			 err++; 
		}
	if(!Equal(A,A))
		{
			err++;
		}
	

	//test +
	Add(A,B,C);
	Add(A,B,D);
	if (!Equal(C,D)) 
	{
		cout<<"Failure Testing Add"<<endl;
		err++;
	}
	Add(B,A,D);
	if(!Equal(C,D)) err++;
	//test -
	Subtract(A,B,C); //C=A-B
	Subtract(A,B,D);//D=A-B
	if(!Equal(C,D)) err++;
	Add(D,B,C); //C=A-B+B, should be A
	if(!Equal(C,A)) err++;
		
	//Multiple ....? Oops
	//Multiplications
	Multiply(1.0,B,C);
	Multiply(2.0,B,D);
	if(Equal(C,D)) err++;//double check A and B to make sure AB<>BA

	//testing dot product
	double dp=Multiply(A,A);
	double dp2=Multiply(B,B);
	if(dp==dp2) err++;   //make sure A*A <> B*B




	//...all kinds of tests you can imagine.

	//output the total errors....
	cout<<"Total Errors found:"<<err<<endl;

	return 0;
}
