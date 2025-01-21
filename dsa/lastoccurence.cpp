#include<iostream>
using namespace std;

int lastoccurence(int arr[],int k, int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return ans;
}

int firstoccurence(int arr[],int k, int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return ans;
}


int main(){
    int arr[] = {1,1,2,3,3,3,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the key : ";
    cin>>k;
    cout<<lastoccurence(arr,k,n)<<endl;
    cout<<firstoccurence(arr,k,n)<<endl;
    //total no of occ = last - first +1;
    int totalocc = lastoccurence(arr,k,n)- firstoccurence(arr,k,n)+1;
    cout<<totalocc<<endl;

}
