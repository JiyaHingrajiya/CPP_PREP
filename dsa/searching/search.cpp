#include<iostream>
using namespace std;
bool linearsearch(int arr[],int key,int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
        
    }
    return false;
}
int main(){
    int arr[]={1,4,6,7,19,89};
    int key;
    int n = sizeof(arr)/sizeof(arr[0]);
    cin>>key;
    int ans =linearsearch(arr,key,n);
    if(ans){
        cout<<"Element is present in array"<<endl;
    }
    else{
        cout<<"not found";
    }

}