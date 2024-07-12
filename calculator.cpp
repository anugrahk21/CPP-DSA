#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers with space seperated: ";
    cin>>a>>b;
    string c;
    cout<<"Enter which operation to perform:(+,-,/,*): ";
    cin>>c;
    int out=0;
    string j;
    j="k";
    if(c=="+"){
        out=a+b;
    }
    else if(c=="-"){
        out=a-b;
    }
    else if(c=="/"){
        out=a/b;
    }
    else if(c=="*"){
        out=a*b;
    }
    else{
        cout<<"Error: Unidentified operation: plese enter either of +,-,/,*";
        j="kk";
    }
    if(j!="kk"){
        cout<<"The calculated value: "<<out;
    }
    return  0;
    
}
