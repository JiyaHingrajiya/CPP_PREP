#include<iostream>
using namespace std;
class Mystack{
    public:
    int* arr;
    int top;
    int n;
    Mystack(){
        arr= new int[n];
        top=-1;
    }
    void push(int val){
        if(top == n-1)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            top--;
        }
    }

    bool isEmpty(){
        return (top == -1); 
    }
    int peak(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
      return arr[top];
    }
    

};
int main(){

}