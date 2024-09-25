#include<iostream>
using namespace std;
class Cricketer{
	
	protected:
		string name;
	public:
		inputname(string n)	
		{
			name = n;
		}
};
class Batsman : public Cricketer{
	
	private:
	int total_runs;
	float average_runs;
	int best_performance;
	int match;
	
	public:	
		input_data()	
		{
			cout<<"Enter how many match player played : ";
			cin>>match;
			cout<<"Enter Player's Total runs in "<<match<<" matchs : ";
			cin>>total_runs;
			cout<<"Enter player's Best performance : ";
			cin>>best_performance;
		}
		average()		
		{
			average_runs = total_runs / static_cast<float>(match);
		}
		
		Display()		
		{
			cout<<"Cricketer Details"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Total Runs : "<<total_runs<<" runs"<<endl;
			cout<<"Average Runs : "<<average_runs<<" runs per match "<<endl;
			cout<<"Best Performance : "<<best_performance<<" runs"<<endl;
		}
};
main()
{
		string name;
		cout<<"Enter Cricketer Name                   : ";
		getline(cin,name);
		Batsman b;	
		b.inputname(name);
		b.input_data();
		b.average();
		b.Display();		
}
