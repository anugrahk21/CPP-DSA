#include <iostream>
using namespace std;

//program to implement merge sort

void merge(int arr[],int start,int mid,int end){
    int n1=(mid-start)+1;
    int n2=end-mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;++i){
        L[i]=arr[start+i];
    };

    for(int j=0;j<n2;++j){
        R[j]=arr[mid+1+j];
    };

    int i=0,j=0,k=start; //k is the index of the main array
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            ++i;
        }
        else{
            arr[k]=R[j];
            ++j;
        }
        ++k;

    };
    while(i<n1){ //if any element left in L (all elements of R are already placed but some elements of L are left) 
        arr[k]=L[i];
        ++k,++i;
    };
    while(j<n2){ //if any element left in R (all elements of L are already placed but some elements of R are left)
        arr[k]=R[j];
        ++k,++j;
    };
};
void mergesort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end); //here mid+1 acts as start
    merge(arr,start,mid,end);

}


int main(){
    int s;
    cout<<"Size: ";
    cin>>s;
    int arr[s];
    //defining index like from where to where
    //0 to n-1
    int start=0;
    int end=s-1; 
    for(int i=0;i<s;++i){
        cin>>arr[i];
    };

    mergesort(arr,start,end);
    cout<<"Sorted array: ";
    for(int i=0;i<s;++i){
        cout<<arr[i]<<" ";
    };
}