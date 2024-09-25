#include<iostream>
using namespace std;
class Matrix
{
	private:
		int a[5],i;	
	public:
		input()				
		{
			int i;
			for(i=0;i<5;i++)
			{
				cout<<i+1<<". : ";
				cin>>a[i];
			}
		}
		Matrix operator+(Matrix& m)	
		{
			Matrix temp;
			for(i=0; i<5; i++)
				temp.a[i] = a[i] + m.a[i];
			return temp;
		}
		display()	
		{
			for(i=0;i<5;i++)
				cout<<i+1<<". : "<<a[i]<<"  "<<endl;
		}
};
main()
{
	Matrix m1,m2,m;			
	cout<<"Enter 5 numbers for 1st Matrix : "<<endl;
	m1.input();			
	cout<<"Enter 5 numbers for 2nd Matrix : "<<endl;
	m2.input();			
	m = m1 + m2;		
	cout<<endl<<"Addition : "<<endl;
	m.display();		
}
