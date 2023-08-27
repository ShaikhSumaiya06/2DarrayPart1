// program to add two matrices and save the result in one of the given matrices
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={10,11,12,13,14,15,16,17,18};
    cout<<"1st matrix : ";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"2nd matrix : ";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // adding the matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j] += arr[i][j];
        }
    }
    cout<<"resultant matrix : ";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}