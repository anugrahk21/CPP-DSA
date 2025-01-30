#include <iostream>
using namespace std;

int replicates(int arrm[],int end){
    int freq[end];
    int uniq[end];
    int k=0; //unique element count
    for(int i=0;i<end;++i){
        bool found=false; // Reset for each new element

        // Check if the element is already in the uniq array
        for(int j=0;j<k;++j){
            if(arrm[i]==uniq[j]){
                freq[j]++;
                found=true;
                break;
            }
        }

        // If the element is not in the uniq array, add it and its frequency count to 1
        if(found==false){
            uniq[k]=arrm[i];
            freq[k]=1;
            k++;
        }

    };
    for(int i=0;i<k;++i){
        cout<<uniq[i]<<" repeats "<<freq[i]<<" times."<<endl;
    };
    return 0;
 

}

int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i=0;i<a;++i){
        cin>>arr[i];
    };
    replicates(arr,a);
}