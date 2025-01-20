#include <iostream>
using namespace std;

bool binarysearch(int arr[], int k, int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // to clear all the edge cases better option to use this otherwise m = (s+e)/2
        // int mid = (e+s)/2;
        if (arr[mid] == k) {
            return true;
        }

        if (arr[mid] < k) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[] = {3, 5, 6, 10, 15, 19, 21};
    int k = 19;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = binarysearch(arr, k, n);
    cout << ans;

    return 0;
}
