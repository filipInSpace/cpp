
// convert a decimal number to binary

#include <iostream>
using namespace std;

int main() {
    int decimalNum, binaryNum = 0, base = 1;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    while (decimalNum > 0) {
        int rem = decimalNum % 2;
        binaryNum += rem * base;
        decimalNum /= 2;
        base *= 10;
    }

    cout << "The binary equivalent is: " << binaryNum << endl;

    return 0;
}
