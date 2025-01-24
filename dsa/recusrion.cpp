#include<iostream>
using namespace std;
int fib(int n){
    if (n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int fac(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int sumofelements(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return arr[0]; 
    }

    return arr[0] + sumofelements(arr + 1, n - 1); 
}

bool issorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]) return false;
    else{
        return issorted(arr+1,n-1);
    }
   
}

int main(){
    int arr[]={1,2,3,4}; // Added semicolon here
    bool res = issorted(arr,4);
    cout<< (res ? "sorted": "not")<<endl;
    cout << fac(4) << endl; 
    cout << fib(4)<<endl;
    cout << sumofelements(arr, 4);
}
