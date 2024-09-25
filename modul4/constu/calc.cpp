 #include<iostream>
using namespace std;
class Calculator			
{
		
	public:
	
	Calculator(int a,int b)	
	{
		cout<<endl<<"Addition    : A + B = "<<a+b;
		cout<<endl<<"Subtraction : A - B = "<<a-b;				
		cout<<endl<<"Mulpliction : A x B = "<<a*b;
		cout<<endl<<"Division    : A / B = "<<static_cast<float>(a)/b;
	}
};

main()
{
	int x,y;
	cout<<"Enter Number A : ";
	cin>>x;
	cout<<"Enter Number B : ";
	cin>>y;
	
	Calculator a(x,y); 
}


