#include <iostream>
using namespace std;

//Array index out of bound exception

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    try{
        int i=0;
        while(true){
            if(i>10){
                throw "Array index out of bound exception";
            };
            cout<<arr[i]<<endl;
            i++;
        }
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
}