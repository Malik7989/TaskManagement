//write a program to find the sum of all the elements in an array
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "The sum of all the elements in the array is: " << sum << endl;
    return 0;
}


