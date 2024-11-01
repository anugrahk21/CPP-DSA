#include <iostream>
using namespace std;

//merge sorting

void merge(int arr[], int start, int mid, int end){
    int n1=mid-start+1; //left part size
    int n2=end-mid; //right part size

    int L[n1], R[n2];

    //copy the values from then array for the left and right parts of the array to L and R respectively.
    for(int i=0;i<n1;i++){
        L[i]=arr[start+i]; //left side
    };

    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j]; //right side
    };
    
    //merge the sorted L and R arrays into arr[start...end]
    int i=0,j=0,k=start;
    //k=index of original array


//ascending order sorting
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){ //L[i]>=R[j] for descending order 
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        };
        k++;
    };

    //copy remaining elements of L
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    };

    //copy remaining elements of R
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    };

};

void mergeSort(int arr[], int start, int end){
    if(start>=end){
        return;
    };
    int mid=(start+end)/2;
    //left
    mergeSort(arr,start,mid);
    //right
    mergeSort(arr,mid+1,end); //mid acts as start
    //merge
    merge(arr,start,mid,end); //max it takes 2 set elements for sorting like (arr,0,0,1)->2 elements

};


int main(){
    int s,end,start,mid;
    cout<<"List length: ";
    cin>>s;
    int arr[s];
    cout<<"Enter elements: ";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    };

    //defining index like from where to where
    //0 to n-1
    start=0;
    end=s-1;
    mergeSort(arr,start,end);
    cout<<"Sorted array: ";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    };

 
};