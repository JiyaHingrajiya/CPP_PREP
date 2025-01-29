#include<iostream>
using namespace std;

void wavepattern(int arr[][4],int row, int col){
    for(int col=0;col<4;col++){
        if(col%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][col]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][col]<<" ";
            }
        }

}
}

int main(){
   int arr[3][4]={
    {1,12,3,8},
    {5,16,7,21},
    {11,10,1,12}
   };
   wavepattern(arr,3,4);

}

