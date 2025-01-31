// // //queue - fifo first in first out
// // // front and rear pointer
// // // exit front and entry from rear


// // #include<iostream>
// // #include<queue>

// // using namespace std;


// // int main(){
// //     queue<int> q;
// //     q.push(1);
// //     q.push(2);
// //     q.push(3);
// //     while(!q.empty()){
// //         cout<<q.front()<<" ";
// //         q.pop();
// //     }

// //     cout<<q.size();
// // }


// //reversing a queue

// #include <bits/stdc++.h> 
// queue<int> reverseQueue(queue<int> q)
// {
//     // Write your code here.
//     stack<int> st;
//     while(!q.empty()){
//         st.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
//     return q;
// }

// //reversing k elements of queue
// #include <bits/stdc++.h> 
// queue<int> reverseElements(queue<int> q, int k)
// {
//     // Write your code here.
//     if (q.empty() || k <= 0 || (size_t)k > q.size()) {  // Fixed condition
        
//         return q;
//     }
//     stack<int> st;
//     for(int i=0;i<k;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }

//     int leftout = q.size()-k;
//     for(int i=0;i<leftout;i++){
//         q.push(q.front());
//         q.pop();
//     }
    

//     return q;

    
// }
