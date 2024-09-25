#include<iostream>
using namespace std;
class Mathematics
{
	public:
		
		operation(int a,int b)	
		{
			cout<<"Addition : A + B = "<<a+b<<endl;
		}
		operation(float a,int b)	
		{
			cout<<"Subtraction : A - B = "<<a-b<<endl;
		}
		operation(int a,float b)
		{
			cout<<"Multiplication : A x B = "<<a*b<<endl;
		}
		operation(float a,float b)
		{
			cout<<"Division : A "<<char(246)<<" B = "<<a/b<<endl;  
		}
};

main()
{	
	Mathematics m; 		//object creation
	
	float x,y;
				//user inputs
	cout<<"Enter a Number A : ";
	cin>>x;
	cout<<"Enter a Number B : ";
	cin>>y;
	
			//call member functions	
	m.operation(static_cast<int>(x),static_cast<int>(y));	//type conversion
	m.operation(x,static_cast<int>(y));
	m.operation(static_cast<int>(x),y);
	m.operation(x,y);
}