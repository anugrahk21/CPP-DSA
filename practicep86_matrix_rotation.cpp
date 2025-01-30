#include <iostream>
using namespace std;

//program to rotate a square matrix by 90, 180 and 270 degrees

int main(){
    cout<<"Enter the number of rows/column (square matrix): ";
    int n;
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    };
    // 90 degree rotation of a matrix is equivalent to taking the transpose of the matrix and then reversing the rows
    cout<<"The 90 degree rotated matrix is: ";
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    cout<<"The 180 degree rotated matrix is: ";
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"The 270 degree rotated matrix is: ";
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    cout<<"The transpose of the matrix is: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ //reverse int j=n-1;j>=0;j-- for 90 degree rotation
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

}