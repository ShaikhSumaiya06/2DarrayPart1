// find the largest element of a given 2D array of integers 
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
    int arr[4][4]={{1,3,4,6},{2,4,5,7},{3,5,6,8},{4,6,7,9}};
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
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] > max1){ 
                max2 = max1;
                max1 = arr[i][j];
            }
            else if((arr[i][j] != max1) && (arr[i][j]>max2) ) max2= arr[i][j];
        }
    }
    cout<<"largest no. : "<<max1<<endl;
    cout<<"2nd largest no. : "<<max2<<endl;
}