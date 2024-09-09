#include <iostream>
using namespace std;

// Binary Search function

int main(){
    int a,b,c;
    cout<<"How many elements: ";
    cin>>a;
    cout<<"Enter elements: ";
    int arr[a];
    for(int i=0;i<a;++i){
        cin>>arr[i];
    };
    cout<<"Enter element to search: ";
    cin>>b;
    int beg=0,end=a-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(arr[mid]==b){
            cout<<"Item found at"<<" "<<mid+1<<endl;
            return 0;
        }
        else if(b>arr[mid]){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}