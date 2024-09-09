#include <iostream>
using namespace std;
//binary search and deletion of element.

int main(){
    int a,b;
    cout<<"Number of elements: ";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;++i){
        cin>>arr[i];
    };
    cout<<"Enter which element to search:";
    cin>>b;
    bool k=false;
    for(int i=0;i<a;++i){
        if(arr[i]==b){
            cout<<"Element fount at "<<i<<" index."<<endl;
            k=true;
        }
    }
    if(k==false){
        cout<<"Element not found"<<endl;
    };
    

    int d;
    cout<<"Enter position to delete: ";
    cin>>d;
    //position and index is different.
    for(int i=d-1;i<a;++i){
        arr[i]=arr[i+1];
    };
    a--; //decreasing the length of the array(if not, last element will be a garbage value)
    for(int i=0;i<a;++i){
        cout<<arr[i]<<" ";
    };

        
}