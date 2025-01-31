//stack - LIFO last in first out
//practicl - undo redo, processe in cpu 
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(5);
    // cout<<st.top()<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
