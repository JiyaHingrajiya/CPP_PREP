#include<iostream>
using namespace std;
int main() {
    //if else
    int age=14;
    if(age >= 18){
        cout<<"can vote";

    }else{
        cout<<"can't vote";
    }

    //ternary

    // condition ? statment1 : statment2
    int num = 20;
    num>0 ? cout<<"pos" : cout<<"neg";

    //nested 
    num == 0 ? "zero" : num > 0 ?"pos" : "neg";

    // int n1,n2,n3;
    // cin>>n1>>n2>>n3;

    // if(n1>n2){
    //     if(n1>n3){
    //         cout<<"n1 is largest";
    //     }
    // }
    // else if (n2> n1){
    //     if(n2>n3){
    //         cout<<"n2 is largest";
    //     }
    // }
    // else if(n3>n1){
    //     if(n3>n2){
    //         cout<<"n3 is largest";
    //     }
    // }
    // else{
    //     cout<<"all are equal";
    // }

    // loops
    // init , termination , update
    for(int i=0;i<10;i++){
        cout<<i<< endl;
    }

    //sum of n numbers
    int sum=0;
    for(int i = 0;i<10;i++){
        sum += i;
    }
    cout<<sum;


    //while loop 
    int i=1;
    while(i<=7){
        cout<<i<<endl;
        i++;
    }

    //do while ->runs atleast once

   int j=1;
    do{
        cout<<"hey";
        j++;
    }
    while(j<3);

    //break and continue 
    
    
    
}