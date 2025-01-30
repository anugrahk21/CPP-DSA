#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myvec1(10);
    vector<int> myvec2;
    for(int i=0;i<10;++i){
        myvec1[i]=i;
    };

    for(int i=0;i<10;++i){
        cout<<myvec1[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<10;++i){
        myvec2.insert(myvec2.begin()+i,i);
    }

    //iterator is used to access the elements of the vector.
    //its like a pointer, we initialize it with the begin(),end() or any position of the vector.
    //we can increment it to access the next element.
    vector<int>::iterator itr=myvec2.begin();
    for(int i=0;i<10;++i){
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;

    myvec1.push_back(10); //inserts at the end of the vector.
    cout<<myvec1.size()<<endl; //size of the vector.

    myvec2.pop_back(); //removes the last element of the vector.
    cout<<myvec2.size()<<endl;

    myvec1.erase(myvec1.begin()+2); //erases the element at the position 3(index=2).
    cout<<myvec1.size()<<endl;

    for(int i=0;i<myvec1.size();++i){
        cout<<myvec1[i]<<" ";
    }
    cout<<endl;

    myvec1.clear(); //clears the vector.
    cout<<myvec1.size()<<endl;

    myvec2.erase(myvec2.begin(),myvec2.begin()+5); //erases the elements from 0 to 4(n-1).

    for(int i=0;i<myvec2.size();++i){
        cout<<myvec2[i]<<" ";
    }


}