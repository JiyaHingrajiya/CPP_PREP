#include<iostream>
using namespace std;
int main(){
//variable
int age = 10;
age = 11;
cout<<age<<endl;

//constants 
const int pi=3.14;
// pi=5.11;//gives error
cout<<pi<<endl;


//Data types

//sizeof() is inbuilt function to check the memory space occupied by the compiler
// cout<< sizeof()<<endl;

// int - 4 bytes
// float - 4 bytes
// double -8 bytes 
// char - 1 byte 
// bool- 1byte

//void is used to store empty thing
// size is 0 for void 

//unsinged int is used to store only positive integer


//input from age 

//if not initialize then it will return garbe value 
// int a ;
// cout<<a;//will give garbage value 

int num1;
int num2;
cout<<"Enter the first number"<<endl;
cin>>num1;
cout<<"Enter the second number"<<endl;
cin>>num2;
cout<<"The sum of two numbers is "<<num1+num2<<endl;

}

