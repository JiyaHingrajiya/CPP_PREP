#include<iostream>
using namespace std;

//function 
void greetings(string name="harry"){
    cout<<"hello , morning " <<name<<endl;
}


int add (int n1,int n2){
    int ans= n1+n2;
    return ans;
}


int main(){
    greetings();
    greetings("kiku");
    int result = add(5,3);
    cout<<result<<endl;


    //patterns

    // 1
    // 12
    // 123
    // 1234
    // 12345
    for(int i=1;i<=5;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }

    // 1
    // 22
    // 333
    // 4444
    // 55555

    for(int i=1;i<=5;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
    }

    // 12345
    // 1234
    // 123
    // 12
    // 1
   for(int i=5;i>=1;i--){
    cout<<endl;
    for(int j =1;j<=i;j++ ){
        cout<<j<<" ";
    }
   }

   cout<<endl;

//     *
//    ***
//   *****
//  *******
// *********

for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i;j++){
        cout<<" ";

    }
    for(int k =1;k<=i*2-1;k++){
        cout<<"*";
    }
    cout<<endl;   
  
}

    
}