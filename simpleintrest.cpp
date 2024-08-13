#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter a rate: "<<endl;
    cin>>a;
    cout<<"Enter a time: "<<endl;;
    cin>> b;
    cout<<"Enter price: "<<endl;
    cin>>c;
    int si=(a*b*c)/100;
    cout<<"The simple interest is: "<<si;
    return 0;

}