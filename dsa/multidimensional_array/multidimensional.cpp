#include<iostream>
using namespace std;

int sumofarr(int arr[3][4], int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    // Finding elements
    int key;
    cin >> key;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == key) {
                cout << "present";
            }
        }
    }

    // Column wise input
    // int arr[3][4];
    // for (int j = 0; j < 4; j++) {
    //     for (int i = 0; i < 3; i++) {
    //         cin >> arr[i][j];
    //     }
    // }

    // Printing
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Column wise output
    // for (int j = 0; j < 4; j++) {
    //     for (int i = 0; i < 3; i++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
