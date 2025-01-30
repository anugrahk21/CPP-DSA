#include <iostream>
using namespace std;

// Function to sort the array, given the start and end index, using bubble sort
//check if the array is sorted
//print the sorted batches of the array

void Sort(int arr[],int s,int e){
    for(int i=s;i<e;i++){
        for(int j=i+1;j<=e;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            };
        };
    };
};

bool ifSorted(int arr[],int n){
    int sortarr[n];
    for(int i=0;i<n;++i){
        sortarr[i]=arr[i];
    };
    Sort(sortarr,0,n);
    bool isSorted=true;
    for(int i=0;i<n;++i){
        if(sortarr[i]!=arr[i]){
            return false;
        };
    };
    return true;
};

void printBatches(int arr[],int n,int k){
    for(int i=n;i<k;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

void sortedBatches(int arr[],int n){
    int start=0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            if (i - start > 1) {
                printBatches(arr,start,i - 1);
            }
            start = i;
        }
    }
    if (n - start > 1) {
        printBatches(arr,start,n);
    }
};

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };

    int s,e;
    cout<<"Enter start and end index: ";
    cin>>s>>e;
    Sort(arr,s,e);
    cout<<"Sorted array as per given range: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    };
    cout<<endl;

    ifSorted(arr,n);
    if (ifSorted(arr,n)){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    };

    cout<<"Batches of already sorted array: ";
    sortedBatches(arr,n);
}