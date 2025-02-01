#include <iostream>
using namespace std;

// Function for exception handling

void CheckExeptions(int n){
    try{
        if(n==0){
            throw (0);
        }
        else if(n<0){
            throw (1.0);
        }
        else if(n>0){
            throw ("positive");
        }  
    }
    catch(int n){
        cout<<"The number is zero"<<endl;
    }
    catch(float n){
        cout<<"The number is negative"<<endl;
    }
    catch(const char* n){
        cout<<"The number is positive"<<endl;
    }
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    CheckExeptions(n);
}