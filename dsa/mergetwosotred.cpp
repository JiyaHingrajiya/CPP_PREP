#include<iostream>
using namespace std;

int main(){
   

    int arr1[] = {1, 2, 3, 3, 3};
    int arr2[] = {3, 4, 5, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int arr[m + n];
    
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }
    
    while (i < m) {
        arr[k++] = arr1[i++];
    }
    
    while (j < n) {
        arr[k++] = arr2[j++];
    }
    
    for (int i : arr) {
        cout << i << " ";
    }
}
    
    // for(int i=0;i<5;i++){
    //     arr[i]=arr1[i];
    // }
    // for(int i=5;i<10;i++){
    //     arr[i]=arr2[i-5];
    // }

    // for(int i: arr){
    //     cout<<i<<" ";
    // }
