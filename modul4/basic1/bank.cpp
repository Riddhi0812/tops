#include<iostream>
using namespace std;

class Bank
{
	private:
	string name;		 
	long long accountno; 
	string account_type;	
	float balance;			
	
	public:
	values(string n,int acno,string type,int bal)	 
	{
		name = n;			 
		accountno = acno;	 
		account_type = type;	 
		balance = bal;
	}	
	deposit()				
	{
		float depo;
		cout<<"Enter deposit amount   : Rs.";
		cin>>depo;
		balance += depo;	
		cout<<"Deposit successfully. "<<endl<<"Current balance : Rs."<<balance<<endl;
	}	
	
	withdraw()				
	{
		float with;
		cout<<"Enter Withdeaw amount  : Rs.";
		cin>>with;
		if(with<=balance)	
		{
			balance -= with;
			cout<<"After withdraw : "<<endl<<"Current balance : Rs."<<balance<<endl;
		}
		else
		{
			cout<<"Insufficient balance.";
			cout<<endl<<"Current balance : Rs."<<balance<<endl;
		}
	}
	display()			
	{
		cout<<"Account Holder's Name  : "<<name<<endl;
		cout<<"Account Number         : "<<accountno<<endl;
		cout<<"Account Type           : "<<account_type<<endl;
		cout<<"Account Balance        : Rs."<<balance;
	}
};

main()
{
	Bank ac; 
	
	string name,type;
	int accountno,balance;
	cout<<"Enter your details "<<endl;
		cout<<"Enter  Name : ";
		getline(cin,name);
		cout<<"Enter Account Number   : ";
		cin>>accountno;
		cout<<"Enter Account Type     : ";
		cin>>type;
		cout<<"Enter Account Balance  : Rs.";
		cin>>balance; 
	ac.values(name,accountno,type,balance);		
	ac.deposit();
	ac.withdraw();
	ac.display();
}
