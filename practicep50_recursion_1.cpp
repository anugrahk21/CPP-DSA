#include <iostream>
using namespace std;

// Function to find the factorial of a number
//upto factorial of 31

long int factorial(long int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
};

// Function to find the Fibonacci number of a given number

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
 };

int main(){
    long int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"Fibonacci of "<<n<<" is "<<fibonacci(n)<<endl;
    return 0;
}