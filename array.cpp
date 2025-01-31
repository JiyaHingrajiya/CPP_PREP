#include<iostream>
using namespace std;

int main() {
    // array - it is storing elements of same data type in continuous memory location
    // it is used for accessing

    // array declaration
    int arr2[5];

    // array initialization
    int arr1[5] = {7, 5, 4, 3, 2};
    arr1[3] = 8;
    cout << arr1[3] << endl;

    // traversing
    for (int i : arr1) {
        cout << i << " ";
    }
    cout << endl;

    int arr[5];
    // size of array
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array: " << size << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

