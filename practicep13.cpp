#include <iostream>
using namespace std;

//count the number of times a digit repeats itself in a number
int main(){
    int n;
    cin>>n;
    int k=n;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    while(n!=0){
        int j=n%10;
        arr[j]+=1;;
        n=n/10;
    };
    
    for(int i=0;i<10;++i){
        
        if (arr[i]>=1){
            cout<<"Digit "<<i<<":  "<<arr[i]<<" times"<<endl;
        }
    };
    
};