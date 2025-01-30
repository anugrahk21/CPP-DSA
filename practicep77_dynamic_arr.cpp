#include <iostream>
using namespace std;

//Array using dynamic memory allocation

class Array{
    public:
    int num;
};

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    Array *arr[n]; // Array of pointers of object of class Array and not array of objects of class Array
    for(int i=0;i<n;++i){
        arr[i]=new Array; // Allocating memory to the object of class Array
        //arr[i] is a pointer to the object of class Array and new Array is used to allocate memory to the object of class Array
        //which means separate memory is allocated to each object of class Array
        cout<<"Enter data: ";
        cin>>arr[i]->num; // giving value to the member of the class through pointer of object pointed by arr[i]
    };

    for(int i=0;i<n;++i){
        cout<<arr[i]->num << " ";
        //arr[i] is a pointer to the object of class Array and -> is used to access the member of the class
        //or
        cout<<(*arr[i]).num<< " "; //we use *arr[i] to access the object of class Array and then .num to access the member of the class
        //arr[i] is a pointer to the object of class Array and *arr[i] is the object of class Array
    };

    // Free allocated memory
    for(int i=0;i<n;++i){
        delete arr[i];
    }
}