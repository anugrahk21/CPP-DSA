#include <iostream>
using namespace std;

//Quick Sort

int findpivot(int arr[],int start,int end){
    int pivot=arr[start];
    int i=start+1,j=end;
    while(i<=j){ //for left side
        while(arr[i]<=pivot){
            i++;
        };
        while(arr[j]>pivot){ //for right side
            --j;
        };
        if(i<j){
            swap(arr[i],arr[j]);
        };
    };
    swap(arr[j],arr[start]); //pivot swap to correct position
    return j; //index of pivot
}

void quickSort(int arr[],int start,int end){
    if(start>end){
        return;
    };
    int pi=findpivot(arr,start,end);
    quickSort(arr,start,pi-1);
    quickSort(arr,pi+1,end);

}


int main(){
    cout<<"Size: ";
    int a;
    cin>>a;
    int arr[a];
    int start=0;
    int end=a-1;
    cout<<"Array elements: ";
    for(int i=0;i<a;++i){
        cin>>arr[i];
    };
    quickSort(arr,start,end);
    cout<<"Sorted :";
    for(int i=0;i<a;++i){
        cout<<arr[i]<<" ";
    };
}