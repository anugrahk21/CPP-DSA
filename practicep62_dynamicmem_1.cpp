#include <iostream>
using namespace std;

int main(){
    int *t=NULL;
    int *p=NULL;
    int *r=NULL;
    p=new int;
    r=new int;
    t=new int;
    if(p==NULL||r==NULL||t==NULL){
        cout<<"Memory not allocated.";
        exit(1);
    }
    cout<<"Enter time, amount, rate:";
    cin>>*t;
    cin>>*p;
    cin>>*r;
    cout<<"SI ="<<((*p)*(*r)*(*t))/100;
    delete p;
    delete r;
    delete t;
    return 0;
}