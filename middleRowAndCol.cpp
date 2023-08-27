/*
program to displays the elements of middle row and the elements of middle column of a 2D matrix
[assuming the 2d array to be a square matrix with odd dimension i.e. 3X3 , 5X5 , 7X7 etc....]
 ex : 1 2 3
      4 5 6
      7 8 9

o/p :   2
      4 5 6
        8
*/
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,3,4},{2,4,5},{3,5,6}}; // 14 18 22 18
    int m=3 , mid = m/2 ;
    cout<<"Matrix : ";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // printing the output
    cout<<"output : ";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            if(i==mid || j==mid) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}