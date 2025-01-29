#include<iostream>
#include<algorithm>
using namespace std;

int secsmallest(int arr[],int n){
   for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
        i++;
    
    }
    else{
        return arr[i+1];
    }
   }
   
}

int seclargest(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[n-1]==arr[n-2]){
            n--;
        }
        else{
            return arr[n-2];
        }
    }
    
}

int main(){
    // int arr[] ={1,2,3,4,5,7,7};
    int arr[] = {1,1,1,2,2,2,4,4,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<secsmallest(arr,n)<<endl;
    cout<<seclargest(arr,n);
}