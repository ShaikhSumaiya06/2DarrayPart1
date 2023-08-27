/*
given a matrix 'A' Of Dimension nXm and co-ordinates (l1,r1) and (l2,r2) .
 return the sum of the rectangle from (l1,r1) to (l2,r2)
 ex1:
 i/p : 
 1 2 -3 4
 0 0 -4 2
 1 -1 2 3
 -4 -5 -7 0
 l1=1,r1=2,l2=3,r2=3;
 iska matlab hamara rectangle banega aisa
 -4 2
  2 3
 -7 0
 o/p : -4
 explanation : -4 + 2 + 2 + 3 -7 + 0 = -4
 ex2 : 
 i/p:
 0 0 -4 2
 1 -1 2 3 
 -4 -5 -7 0
 l1=1,r1=0,l2=0,r2=3
 rectange formed : 
0 0 -4 2
1 -1 2 3
 o/p: 2

 matlab hamara matrix shrink ho gaya & usi ke element ka sum karna hai
 0-m(row) loop --> l1-l2
 0-n(cols) loop --> r1-r2;
*/
#include<iostream>
#include<vector>
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
    int arr[4][4]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}};
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
    int l1 , l2, r1 , r2;
    cout<<"enter l1 : ";
    cin>>l1;
    cout<<"enter r1 : ";
    cin>>r1;
    cout<<"enter l2 : ";
    cin>>l2;
    cout<<"enter r2 : ";
    cin>>r2;
    if((l1<m) && (r1<n) && (l2<m) && (r2<=n)){
        int sum=0;
        for(int i=min(l1,l2);i<=max(l1,l2);i++){
            for(int j=min(r1,r2);j<=max(r1,r2);j++){
                sum += arr[i][j];
            }
        }
        cout<<"Sum of 2 co-ordinates : "<<sum;
    }
    else{
        cout<<"Co-ordinates are out of bound!!!";
    }
    
}