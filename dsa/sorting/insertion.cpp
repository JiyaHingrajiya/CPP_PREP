#include<iostream>
using namespace std;

void insertion(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j =i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[]={1,4,9,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    for(int i : arr){
        cout<<i<<" ";
    }
}