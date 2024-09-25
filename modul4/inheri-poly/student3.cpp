#include<iostream>
using namespace std;

class Person
{
	protected:
	string name;	
	int age;
	public:
		values(string s,int a)	
		{
			name = s;
			age = a;
		}
};
class Student : public Person
{
	private:
	float percentage;
	public:
	marks(int total,int marks)			
	{			
		percentage = (marks * 100) /static_cast<float>(total);
	}
	Display()		
	{	
		cout<<"STUDENT DETAILS"<<endl;
		cout<<"NAME : "<<name<<endl;
		cout<<"AGE : "<<age<<endl;
		cout<<"PERCENTAGE : "<<percentage<<" % "<<endl;
	}
};

class Teacher : public Person
{
	private:
	int salary;
	public:
	setsalary(int sal)		
	{
		salary = sal;
	}
		
	display()				
	{
		cout<<"TEACHER DETAILS"<<endl;
		cout<<"NAME : "<<name<<endl;
		cout<<"AGE : "<<age<<endl;
		cout<<"SALARY : Rs."<<salary<<endl;		
	}
};

main()
{
	Student s;  
	Teacher t;   
	string n1,n2;
	int age1,age2,marks,tmarks,sal; 
			
	cout<<"Enter Student Details :"<<endl;
	cout<<"Name : ";
	getline(cin,n1);
	cout<<"Age : ";
	cin>>age1;
	cout<<"Total Marks : ";
	cin>>tmarks;
	cout<<"Obtained Marks : ";
	cin>>marks;
	cout<<endl;
	cin.ignore();
	
	cout<<"Enter Teacher Details :"<<endl;
	cout<<"Name   : ";
	getline(cin,n2);
	cout<<"Age    : ";
	cin>>age2;
	cout<<"Salary : Rs.";
	cin>>sal;
	
	cout<<endl;
	s.values(n1,age1);			
	s.marks(tmarks,marks);			
	s.Display();	
	cout<<endl;
	t.values(n2,age2);			
	t.setsalary(sal);			
	t.display();				
}
