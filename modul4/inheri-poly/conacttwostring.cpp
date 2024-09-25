#include<iostream>
using namespace std;

class Combine
{
	private:
		string s;
	public:	
		input()		
		{
			getline(cin,s);
		}
		Combine operator+(Combine& c)		
		{
			Combine temp;
		    temp.s = s + c.s; 			
			return temp;		
		}
		display()		
		{
			cout<<s;
		}
};
main()
{	
	Combine str1,str2,str;	
	cout<<"Enter String A : ";
	str1.input();			
	cout<<"Enter String B : ";
	str2.input();				
	str = str1 + str2 ;		
	cout<<"After concatenate the two strings : ";
	str.display();
}
