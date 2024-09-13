#include <iostream>
using namespace std;

//pointer within class
//using pointer to make array

class Array{
    int *arr;
    int size;
    public:
    void get_data(int n){
        size=n;
        arr=new int[size];
        cout<<"Enter elements :";
        for(int i=0;i<size;i++){
            cin>>*(arr+i);
        }
    }

    void add(){
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=*(arr+i);
        }
        cout<<"Sum of elements: "<<sum<<endl;
    }


};

int main(){
    Array a;
    int n;
    cout<<"Number of elements: ";
    cin>>n;
    a.get_data(n);
    a.add();
    return 0;
}