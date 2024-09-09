#include <iostream>
using namespace std;

//diagonal elements
//multiplication of matrix.

int main(){
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int matrix1[m][n];
    cout<<"Enter the element matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix1[i][j];
        }
    };
    //print diagonal matrix
    if(m==n){
        cout<<"Diagonal elements of the matrix: ";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    cout<<matrix1[i][j]<<" ";
                };
            };
        }
        cout<<endl;
    }
    else{
        cout<<"Matrix is not square!";
        cout<<endl;
    };
    //multiplication of 2 matrices

    int a,b;
    cout << "Enter the number of rows for the 2nd matrix: ";
    cin >> a;
    cout << "Enter the number of columns for the 2nd matrix: ";
    cin >> b;
    int matrix2[a][b];
    cout<<"Enter the element matrix: "<<endl;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>matrix2[i][j];
        }
    };
    // Declaring the result matrix with
    //dimensions m x b (since the result of multiplying m x n and a x b matrices will have dimensions m x b)
    int result[m][b];
    // Checking if the matrices can be multiplied.
    // The number of columns of the first matrix must be equal to the number of rows of the second matrix
    if(n!=a){
        cout<<"Matrices can't be multiplied!";
        return 0;
    };
    for(int i=0; i<m; i++){
        for(int j=0; j<b; j++){
            // Initialize the element in the result matrix to 0
            result[i][j]=0;
            // Loop through each element in the row/column pair
            for(int k=0;k<n;k++){
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    };
    cout<<"Resultant matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<b; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    };
    
};