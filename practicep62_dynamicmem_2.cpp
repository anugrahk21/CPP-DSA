#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size: ";
    cin>>n;
    int *arr=new int[n];
    int s=0;
    int k;
    cout<<"Enter elements: ";
    for(int i=0;i<n;++i){
        cin>>k;
        arr[i]=k;

    };
    for(int i=0;i<n;++i){
        s=s+arr[i];
    }
    cout<<"Sum: "<<s;
    delete[] arr;
    if(arr==NULL){
        printf("NULL");
    }


}