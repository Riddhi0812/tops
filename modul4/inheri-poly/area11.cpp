#include<iostream>
using namespace std;

class AreaRTC{
	
	public:
							
		Area(int a,int b)				
		{
			cout<<"AREA OF RECTANGLE : "<<a*b<<endl<<endl;
		}
		Area(float a,int b,int c)		//Find Area of Triangle
		{
			cout<<"AREA OF TRIANGLE  : "<<a*b*c<<endl<<endl;
		}
		Area(int Radius)				
		{
			float pi=3.14;
			cout<<"AREA OF CIRCLE    : "<<pi*Radius*Radius<<endl<<endl;
		}
};
main()
{
	AreaRTC a;			//create object for class
	
	int x,y; 
	cout<<"Enter Ractangle Details : "<<endl;//user inputs
	cout<<"Length : ";
	cin>>x;
	cout<<"Breath : ";
	cin>>y;
	
	a.Area(x,y); 	
	cout<<"Enter Triangle Details  : "<<endl;
	cout<<"Base   : ";
	cin>>x;
	cout<<"Heigth : ";
	cin>>y;
	
	a.Area(0.5,x,y);	//member function call
	cout<<"Enter Circle Details    : "<<endl;
	cout<<"Radius   : ";
	cin>>x;
	
	a.Area(x);		
}
