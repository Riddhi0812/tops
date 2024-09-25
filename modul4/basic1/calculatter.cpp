//WAP to create simple calculator using class 

#include<iostream>
using namespace std;

class Calculator  
{
	public:
	int x,y;
	add(int x,int y)
	{
		cout<<endl<<"Addition    : A + B = "<<x+y;		
	}	
	
	sub(int x,int y)
	{
		cout<<endl<<"Subtraction : A - B = "<<x-y;		
	}	
	
	mul(int x,int y)
	{
		cout<<endl<<"Mulpliction : A x B = "<<x*y;		
	}	
	
	div(int x,int y)
	{
		cout<<endl<<"Division    : A / B = "<<static_cast<float>(x)/y;		
	}	
};

main()
{
	Calculator c ;	
	cout<<"Enter Number A : ";
	cin>>c.x;
	cout<<"Enter Number B : ";
	cin>>c.y;
	c.add(c.x,c.y);			
	c.sub(c.x,c.y);
	c.mul(c.x,c.y);
	c.div(c.x,c.y);
}


