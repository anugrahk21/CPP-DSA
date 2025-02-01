#include <iostream>
using namespace std;

//program to demonstrate the use of throw outside the try block

void divide(int x,int y,int z){
    cout<<"We are in divide function"<<endl;
    if((x-y)!=0){
        int result=z/(x-y);
    }
    else{
        throw(x-y);
    }
}
int main(){
    try{
        cout<<"We are in try block"<<endl;
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int k){
        cout<<"Caught exception x-y= "<<k<<endl;
    }
    return 0;
}