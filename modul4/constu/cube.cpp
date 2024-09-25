#include<iostream>
using namespace std;

class Cubic{
	
	public:
	inline multiplication(int x,int y)
	{
		return x*y;
	}
	inline cube(int z)
	{
		return z*z*z; 
	}
};

main()
{
	Cubic m;
	int a,b;
	cout<<"Enter Number 1 : ";
	cin>>a;
	cout<<"Enter Number 2 : ";
	cin>>b; 
	cout<<"Multiplication : 1 x 2 = "<<m.multiplication(a,b)<<endl;
	cout<<"cube of 1 : "<<m.cube(a)<<endl;
	cout<<"cube of 2 : "<<m.cube(b);
}

