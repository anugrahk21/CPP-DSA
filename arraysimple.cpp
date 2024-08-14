#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int j=0; j<5; ++j){
        int k;
        cin >> k;
        arr[j]=k;
    }
    for(int l=0; l<5; ++l){
        cout << arr[l]<<" ";
    }
}