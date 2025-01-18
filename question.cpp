// esign a C++ program that manages student information using the concept of Encapsulation. The program should store and manage student details securely, allowing access to sensitive data only through proper methods.

// Requirements:

// Create a Student class with the following private data members:
// string name (Student's Name)
// int rollNumber (Roll Number)
// float marks (Marks out of 100)
// Implement public methods for:
// Setters: To assign values to the private data members.
// Getters: To safely access and display student information.
// A method to grade the student based on marks:
// A for marks ≥ 90
// B for marks ≥ 75 and < 90
// C for marks ≥ 60 and < 75
// D for marks ≥ 40 and < 60
// F for marks < 40
// Ensure that marks cannot be set beyond the valid range (0-100).
// Demonstrate the functionality by creating objects and displaying their details and grades.

#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    float marks;

    public:

    //setters
    void setName(string n){
        name=n;
    }

    void setRoll(int r){
        rollNumber=r;
    }

    void setmarks(int m){
        marks =m;
    }

    //getters

    string getname(){
        return name;
    }

    int getroll(){
        return rollNumber;
    }

    int getmarks(){
        return marks;
    }

   

    void grading(){
        if(marks>=90){
            cout<<"Grade: A"<<endl;
        }
        else if(marks>75 && marks<90){
            cout<<"Grade: B"<<endl;
        }
        else if(marks>60 && marks<75){
            cout<<"Grade: C"<<endl;
        }
        else if(marks>40 && marks<60){
            cout<<"Grade: D"<<endl;
        }
        else if(marks<40){
            cout<<"Grade : F"<<endl;
        }
        else{
            cout<<"Invalid marks"<<endl;
        }
    }


};




int main(){
    Student s1;
    s1.setName("rani");
    s1.setRoll(1);
    s1.setmarks(56);

    cout<<"name :"<<s1.getname()<<endl;
    cout<<"roll no :"<<s1.getroll()<<endl;
    cout<<"marks :"<<s1.getmarks()<<endl;
    s1.grading();

}