#include <iostream>
using namespace std;

//program to show multiple catch blocks for same data type

void divide(double x,double y){
    try{
        if(y==0){
            throw y;
        }
        cout<<"Result: "<<x/y<<endl;
    }
    catch(double){
        if(x==5){
            throw x;
        }
        cout<<"Caught in divide function."<<endl;
        cout<<"Division by zero is not allowed."<<endl;
    }
};

int main(){
    try{
        divide(6,0);
    }
    catch(double i){
        cout<<"Caught in main."<<endl;
        cout<<"X cannot be "<<i<<endl;
    }
}