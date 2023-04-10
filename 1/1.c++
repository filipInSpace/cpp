
// a program to calculate the factorial of a number using recursion in

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
