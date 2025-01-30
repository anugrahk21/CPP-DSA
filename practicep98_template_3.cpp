#include <iostream>
using namespace std;;

template <class T>

T arraysum(T arr[],int n){
    T s=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    };
    for(int i=0;i<n;++i){
        s=s+arr[i];
    };
    return s;
};

int main(){
    int l;
    cin>>l;
    int arr1[l];
    cout<<arraysum(arr1,l)<<endl;

    float arr2[l];
    cout<<arraysum(arr2,l)<<endl;

    double arr3[l];
    cout<<arraysum(arr3,l)<<endl;
}