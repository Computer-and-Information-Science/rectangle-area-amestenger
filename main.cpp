#include <iostream>
using namespace std;

int main() 
{ 
  double length;
  double width;
  double area;
  double perimeter;

  cout << "Rectangle Properties:" << endl;

  length = 7.2;
  width = 1.3;
  perimeter = 2 * (length + width) ;
  area = length * width;

  cout << "Length = " << width << endl;
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;

  return 0;
}