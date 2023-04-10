
// find the sum of the digits of a number

#include <iostream>
using namespace std;

int main() {
   int n, sum = 0, rem;
   cout << "Enter a number: ";
   cin >> n;

   while (n > 0) {
      rem = n % 10;     // Get the last digit
      sum = sum + rem;  // Add the digit to sum
      n = n / 10;       // Remove the last digit from number
   }

   cout << "Sum of the digits: " << sum << endl;
   return 0;
}
