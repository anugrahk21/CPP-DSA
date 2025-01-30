#include <iostream>
using namespace std;

template <class T1,class T2>

void multiply(T1 num1,T2 num2){
    cout<<num1*num2;
};

int main(){
    int num1=3;
    int num2=2.4;
    multiply<int,float>(num1,num2);
}