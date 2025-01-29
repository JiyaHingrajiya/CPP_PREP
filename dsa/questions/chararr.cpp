#include<iostream>
#include<cstring>
#include<string>


using namespace std;

int  getlength(char arr[]){
    int length = 0;
    while(arr[length] != '\0'){
        length++;
    }
    return length;

}

bool pallindrom(char arr[],int n){
    
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]!=arr[e]) return false;
        s++;
        e--;
    }
    return true;
}

int main(){

    char arr[] = "noon";
    int n = strlen(arr);
    // int n = getlength(arr);
    cout<<pallindrom(arr,n);
    // cout<<pallindrom(arr,4);



    // char arr[] ={'b','i','t'};
    // cout<<getlength(arr);
    // string arr; 
    // getline(cin, arr); 
    // cout << arr;


}
