#include <iostream>
using namespace std;
template <class T>

T findMin(T a,T b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
};

int main(){
    int a1,b1;
    cin>>a1>>b1;
    float a2,b2;
    cin>>a2>>b2;
    double a3,b3;
    cin>>a3>>b3;
    cout<<"Min is"<<findMin<float>(a2,b2)<<endl;
    cout<<"Min is"<<findMin<double>(a3,b3)<<endl;
    cout<<"Min is"<<findMin<int>(a1,b1)<<endl;
}
