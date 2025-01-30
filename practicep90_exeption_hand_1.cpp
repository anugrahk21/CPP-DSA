#include <iostream>
using namespace std;

//exception handling for division by zero, if x or y is even then throw exception

int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    try{
        if(a%2==0 || b%2==0){
            throw "Even number is not allowed";
        };
        int x=a-b;
        if(x!=0){
            cout<<"Result: "<<a/x<<endl;
        }
        else if(x==0){
            throw(x);
        }
    }
    catch(int i){
        cout<<"Division by zero is not allowed"<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
    
}