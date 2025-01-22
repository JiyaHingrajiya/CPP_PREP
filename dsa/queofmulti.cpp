#include<iostream>
#include <cmath>
#include<limits>
using namespace std;

int max_sum_of_row(int arr[][4],int r,int c) {

    int max=INT16_MIN;
    int rowindex=-1;
    for(int r=0;r<3;r++){
        int sum=0;
        
        for(int c=0;c<4;c++){
            sum += arr[r][c];
        }
        if(sum>max){
            max=sum;
            rowindex = r;
        }
        
    }
    cout<<"the max sum : "<<max<<endl;
    return rowindex;

    //my approch
    // int r1 = 0, r2 = 0, r3 = 0;
    // for (int j = 0; j < 4; j++) {
    //     r1 += arr[0][j];
    //     r2 += arr[1][j];
    //     r3 += arr[2][j];
    // }
    // return max(r1, max(r2, r3));
}

int main() {
    int arr[3][4] = {
        {1, 12, 3, 8},
        {5, 16, 7, 21},
        {11, 10, 1, 12}
    };

   
    int index = max_sum_of_row(arr,3,4);
    cout<<"row index : "<<index;

    
}