#include <iostream>
using namespace std;

int table(int number){
    int mul[10];
    for(int i=1; i<11; ++i){
        mul[i]=number*i;
    }
    for(int j=0; j<10; ++j){
        cout << mul[j] << " ";
    }
    return 0; 
}
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
    cout << endl;
    cout<<"Table of which number:" ;
    int num;
    cin >> num;
    table(num);
}