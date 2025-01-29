#include<iostream>
using namespace std;
//selection sort
//it will give solution in n-1 iterations
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }

}


//bubble sort

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool haswapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                haswapped = true;
            }
        }
        if(haswapped == false) break;
}
}


int main(){
    int arr[] ={3,5,1,4,9,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    // selectionsort(arr,n);
    bubblesort(arr,n);
    cout<<"Sorted array is "<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
}
