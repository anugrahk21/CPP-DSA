#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cout<<"Enter a number: ";
    cin>>a;
    bool k=true;
    int arr[10];//as a[10] is not possible (till a[n-1])
    int l=a.length();
    for(int i=0;i<l;++i){
        arr[i]=a[i];
    };
    for(int i=0;i<l;++i){
        //when a thing is represented in ' ' it is the ascii value.
        //if we have a string or char like '9' we use the ascii to check whether its a num or not.
        //like char which of num will have a specific range of ascii so we can check without like changing the 
        //datatype.
        if(arr[i]>='0' && arr[i]<='9'){ //here we check if the 
            k=true;
        }
        else{
            k=false;
            break;
        }
    };
    if(k==true && l==10){
        cout<<"NUMBER";
    }
    else{
        cout<<"NOT NUMBER";
    }

}