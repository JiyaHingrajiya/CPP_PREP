#include<iostream>
using namespace std;
    //constructor is a method same as class and has no return type 
    //it is used to initialize the object of class
    //there is default constructor when obj is created and it is called 
class Car{
    //attributes--> data members
    public:
    string color;
    int speed;
    int price;
    
    //behaviour--> member functions
    void boost(){
        speed += 10;
        cout<<speed<<endl;
    }
    Car(){
        cout<<"Car is created"<<endl;
    }
    

};


int main(){
    Car car1;
    car1.color="black";
    car1.speed=80;
    
    cout<<car1.color<<endl;
    cout<<car1.speed<<endl;
    car1.boost();

    Car c2;
    c2.color="red";
    c2.speed=90;
    c2.boost();

    //there are 4 pillars of oops 
    // 1.encapsulation --> binding of data members or functions . This will increase the security of the data
    // 2.inheritance
    // 3.polymorphism
    // 4.abstraction


}