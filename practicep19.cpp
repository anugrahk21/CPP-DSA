#include <iostream>
using namespace std;

//default arguments

void display(char ='*',int=1);
int main(){
    cout<<"No arguments passed."<<endl;
    display();
    cout<<"First argument passed"<<endl;
    display('$');
    cout<<"Both arguments passed"<<endl;
    display('*',5);
    return 0;
}
void display(char c,int n){
    for(int i=0;i<n;i++){
        cout<<c;
    }
    cout<<endl;
}