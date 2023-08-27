// a program to store 10 at every index of a 2D matrix with 5 row and 5 cols
#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    cout<<"Enter element : ";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           arr[i][j]=10;
        }
    }
    // printing the matrix
    cout<<endl;
    cout<<"matrix : ";
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}