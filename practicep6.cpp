//accept and display array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0; i<n; ++i){
        cin>>array[i];
    };
    for(int i=0; i<n; ++i){
        cout<<array[i]<<" ";
    };
    cout<<endl;
    
    //find and display the sum of element digits greater than 9 and less than 100
    for(int i=0; i<n; ++i){
        if(array[i]>9&&array[i]<100){
            int k=array[i]/10;
            int l=array[i]%10;
            cout<<l+k<<" ";
        }
    }

    //add a element to the array as per user
    int element,position;
    cin>>element>>position;
    array[n+1];
    if (position>n+1){
        cout<<"Invalid position! Enter a position within the array!"<<endl;
        return 0;
    }
    else{
        for(int i=n-1; i>=position; --i){ //the loop doesn't run if the element position is same as the old length of the array.
            array[i+1]=array[i];

        }
        array[position]=element;
        for(int i=0;i<n+1;++i){
            cout<<array[i]<<" ";
        }
    }
};
