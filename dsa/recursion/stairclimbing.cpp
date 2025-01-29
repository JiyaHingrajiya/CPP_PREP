#include<iostream>
using namespace std;

int climb(int n){
    if (n<2) return 1;
    return climb(n-1)+climb(n-2);
}

int main(){
    cout<<climb(4);
}