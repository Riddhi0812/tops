#include <iostream> 
using namespace std;
class Rectangle { 
  private: 
   int length; 
    int width; 

  public:
    Rectangle(int len, int wid): length(len), width(wid) {
	}
	 int calculateArea() 
	 {
    return length * width;
	 }
    int calculatePerimeter() {
      return 2 * (length + width); 
    }
};

main() 
{
  int length, width;
  cout << "Enter length of the rectangle: ";
  cin >> length; 
  cout << "Enter width of the rectangle: ";
  cin >> width; 
  Rectangle rectangle(length, width);
  int area = rectangle.calculateArea(); 
  cout << "\nArea: " << area << endl;
  int perimeter = rectangle.calculatePerimeter();  
  cout << "Perimeter: " << perimeter << endl; 

  return 0; 
}

