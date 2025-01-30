#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//example of using few functions of algorithm library

void show(int n) {
    cout << n << " ";
}

class multiply{
    public:
    int mult(int &n){
        n=n*5;
    };
    int show(int n){
        cout << n << " ";
    };
    
};

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v(arr, arr+5); //copying array to vector(initializing vector with elements of array)
    for_each(v.begin(), v.end(), show); //applying show function to each element of vector
    cout << endl;
    multiply m;
    for_each(v.begin(), v.end(), m.mult); //applying mult function to each element of vector
    for_each(v.begin(), v.end(), m.show); //applying show function to each element of vector
    // m.mult(v[0]);
    // m.show(v[0]);
}
