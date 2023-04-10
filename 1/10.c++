
// calculate the area of a circle given its radius

#include <iostream>
using namespace std;

const double PI = 3.14159;

double areaOfCircle(double radius) {
   double area = PI * radius * radius;
   return area;
}

int main() {
   double radius;
   cout << "Enter the radius of the circle: ";
   cin >> radius;

   double area = areaOfCircle(radius);
   cout << "The area of the circle is: " << area << endl;

   return 0;
}
