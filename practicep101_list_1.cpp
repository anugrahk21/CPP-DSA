#include <iostream>
#include <list>
using namespace std;

//using list functions in c++.
//list is a doubly linked list.
//it is a sequence container that allows non-contiguous memory allocation.

void display(list<int> &mylist1){
    list<int>::iterator itr=mylist1.begin();
    while(itr!=mylist1.end()){
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
};

int main(){
    list<int> mylist1;
    list<int> mylist2(5,100); //5 elements with value 100.

    for(int i=0;i<10;++i){
        mylist1.push_back(i);
    }
    cout<<"Displaying mylist1: ";
    display(mylist1);

    cout<<"Displaying mylist2: ";
    display(mylist2);

    list<int>::iterator p;
    for(p=mylist2.begin();p!=mylist2.end();++p){
        *p=*p/2;
    };
    cout<<"Displaying mylist2 after dividing by 2: ";
    display(mylist2);

    mylist1.push_front(10); //inserts at the front.
    mylist1.push_front(20); //inserts at the back.
    mylist1.push_front(30); //inserts at the back.
    cout<<"Displaying mylist1 after inserting at the front: ";
    display(mylist1);

    mylist1.pop_front(); //removes the first element.
    cout<<"Displaying mylist1 after removing the first element: ";
    display(mylist1);

    mylist1.sort(); //sorts the list.
    cout<<"Displaying mylist1 after sorting: ";
    display(mylist1);

    mylist1.reverse(); //reverses the list.
    cout<<"Displaying mylist1 after reversing: ";
    display(mylist1);

    mylist1.merge(mylist2); //merges the list.
    cout<<"Displaying mylist1 after merging with mylist2: ";
    display(mylist1);
}