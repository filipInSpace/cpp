
// a program to find the sum of all the elements in an array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of elements in the array is: " << sum << endl;
    return 0;
}
