#include<iostream>
#include<climits>
using namespace std;
int getmaxelement(int arr[],int n){

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int getminelement(int arr[],int n){

    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}

int main(){

    int arr[]= { 3,5,10,8,11,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<getmaxelement(arr,n)<<endl;
    cout<<getminelement(arr,n);

}