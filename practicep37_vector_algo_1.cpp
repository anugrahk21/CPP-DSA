#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//vector and algorithm.

int main(){
    cout<<"Enter array size: ";
    int size;
    cin>>size;
    vector<int> myvec(size);

    //insert values.
    for(int i=0;i<size;++i){
        int a;
        cin>>a;
        //we can only use this after declaring the size of vector.
        //or myvec.insert(myvec.begin()+i,a)
        myvec.at(i)=a;//or myvec.push_back(a)
    };

    //display the values
    for(int i=0;i<size;++i){
        cout<<myvec.at(i)<<" ";
    };
    cout<<endl;
    //sort in ascending order
    sort(myvec.begin(),myvec.end());
    for(int i=0;i<size;++i){
        cout<<myvec.at(i)<<" ";
    };
    cout<<endl;

    //sort in descending order
    sort(myvec.begin(),myvec.end(),greater<int>());
    for(int i=0;i<size;++i){
        cout<<myvec.at(i)<<" ";
    };
    cout<<endl;

    //reverse the vector
    reverse(myvec.begin(),myvec.end());
    for(int i=0;i<size;++i){
        cout<<myvec[i]<<" "; //or myvec.at(i)
    };
    cout<<endl;

    //a iterator which keeps the index.
    //iterator index starts from 0.
    vector<int>::iterator itr=myvec.begin(); //its 0 now...we need to increment for increasing the index.

    //erase a element at a position.
    myvec.erase(myvec.begin()+2);
    for(int i=0;i<size-1;++i){
        cout<<myvec.at(i)<<" "; //or myvec[i]
    };
    cout<<endl;

    //size of vector
    cout<<myvec.size();

}