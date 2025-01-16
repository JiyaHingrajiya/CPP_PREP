#include<iostream>
using namespace std;
int main() {
    int a=1;
    int b = 2;

    //arithmetic oprators -> + - * / %
    //---------------------------------------

    //increment and decrement operator

    // cout<<a++<<endl; //5
    // cout<<++a<<endl; //7
    // cout<< a++ + ++a << endl; //5+7

    //---------------------------------------

    //assignment operator  -> = += -= *= /= %=

    // a += b -> a+b = a 

    //---------------------------------------

    //relational operator -> == != >= <= <

    //---------------------------------------

    //logical operator -> && || ! 

    // c1 c2  &&  ||
    // 1  1    1   1
    // 1  0    0   1
    // 0  1    0   1
    // 0  0    0   0

    // Design a C++ program to create a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, division, and modulus. The program should take two numbers and an operator as input from the user and display the result based on the selected operation.

    int num1, num2;
    char op;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the sec num: ";
    cin>>num2;

    cout<<"enter the operator:";

    cin>>op;
    if(op == '+'){
        cout<<num1+num2<<endl;
    }
    else if(op == '-' ){
        cout<<num1- num2<<endl;
    }
    else if(op == '*' ){
        cout<<num1* num2<<endl;

    }
    else if(op == '/' ){
        if(num2 != 0){
            cout<<num1/ num2<<endl;
        }
    else{
            cout<<"error"<<endl;
        }
    }
}