#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;

    Queue(){
        arr = new int[size];
        front=-1;
        rear=-1;
    }
     void push(int val){
        if (rear == size - 1) {
            cout << "Queue is full" << endl;
        }
        rear++;
        arr[rear] = val;
        if(front == -1) front++;
     }

     void pop(){
        if (front == -1) {
            cout << "Queue is empty" << endl;
        }
        front++;
     }
};

int main(){
    
}