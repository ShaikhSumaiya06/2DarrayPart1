/*
to print the row number having the maximum sum in a given matrix
ex1 : 1 3 5 7
      3 4 7 8
      1 4 12 3
o/p : 2
explanation : the 2nd row has the maximum sum i.e. 1+4+12+3 = 20
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int m , n;
    // cout<<"enter no. of rows : ";
    // cin>>m;
    // cout<<"enter no. of cols : ";
    // cin>>n;
    // int arr[m][n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"Enter ( "<<i<<","<<j<<" ) element : ";
    //         cin>>arr[i][j];
    //     }
    // }
    int arr[4][4]={{1,3,4,6},{2,4,5,7},{3,5,6,8},{4,6,7,1}}; // 14 18 22 18
    int m=4,n=4;
    cout<<"Matrix : ";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int max = INT_MIN;
    int index=-1;
    // doing the row sum
    for(int i=0;i<m;i++){
        int sum=0;        
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(max<sum){
            max=sum;
            index=i;
        }
    }
    cout<<"The row with maximum sum  : "<<index<<endl;
    cout<<"max row sum : "<<max;
}