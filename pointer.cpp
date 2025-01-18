#include<iostream>
using namespace std;
int main() {
    int a1 = 5;
    int a2 = 10;
    cout<<&a1<<endl;

    int *ptr = &a1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}