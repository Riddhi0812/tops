#include <iostream> 
using namespace std;
class Person 
{ 
  private: 
    string name; 
    int age; 
    string country; 
  public:
    setName(const string & n)
	{
	  name = n;
    }

    setAge(int a) 
	{
      age = a; 
	}

    setCountry(const string & c) 
	{ 
      country = c; 
    }
    string getName() 
	{
      return name; 
    }

    int getAge() 
	{
      return age; 
    }

    string getCountry() 
	{ 
      return country; 
	}
	
};

int main() 
{
  Person person;
  person.setName("Riddhi");
  person.setAge(24);
  person.setCountry("INDIA"); 
  cout << "Name: " << person.getName() << std::endl; 
  cout << "Age: " << person.getAge() << std::endl; 
  cout << "Country: " << person.getCountry() << std::endl;
}
