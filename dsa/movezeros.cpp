#include<iostream>
using namespace std;
void movezeros(int arr[],int n){
   
        int nonzeroindex=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[nonzeroindex]=arr[i];
                nonzeroindex++;
            }
        }
        for(int i=nonzeroindex;i<n;i++){
            arr[i]=0;
        }
}
int main(){
    int arr[]={1,0,2,3,0,4,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezeros(arr,n);
    for(int i : arr){
        cout<<i<<" ";
    }

}