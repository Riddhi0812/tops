#include <iostream>
using namespace std;

class Rectangle
{
	protected:
		int width;
	int height;
	public:
		void read_input()
		{
 		cout<<"Enter  Width :" << width <<endl;
 		cin >> width; 
		cout<< "Enter  Height : " << height << endl;
		cin>> height;
		}
};

class RectangleArea: public Rectangle
{
	public: void display()
	{
		cout<<"Area of rectangle : " << width * height;
	}

};

int main()
{
	RectangleArea obj;
	obj.read_input();
	obj.Rectangle();
	obj.display();

	return 0;
}
