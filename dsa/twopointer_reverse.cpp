#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
        }
     }

int main(){
    int arr[]={2,3,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n);
    for(int i : arr){
        cout<<i<<" ";
    }

}