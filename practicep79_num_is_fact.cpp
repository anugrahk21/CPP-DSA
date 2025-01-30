#include <iostream>
using namespace std;

//function to check if a number is a factorial number or not

bool isFactorial(int n){
    int f=1;

    //explanation of the end condition of the loop:
    //we can give f<n as the end condition of the loop (even though the start is given as i) 
    //because end condition we can give any condition that is true or false not necessarily the end condition of the same starting variable.
    //here f<n because it allows you to exit the loop immediately once you exceed or match the target number.
    for(int i=1;f<n;i++){ // loop to find the factorial of a number till factorial is less than the number.
        if(n==0){ // 0! is 1 so if n is 0 then return false.
            return false;
        };
        f*=i;
    }
    if(f==n){
        return true;
    }   
    else{
        return false;
    }

    //The above code can be written in a single line as:
    //return (f==n);


    //to use f<=n as the end condition of the loop, we can use the following code:
    // for(int i=1;f<=n;i++){ // loop to find the factorial of a number till factorial is less than or equal to the number.
    //     if(n==0){ // 0! is 1 so if n is 0 then return false.
    //         return false;
    //     };
    //     f*=i;
    //     if(f==n){
    //         return true;
    //     }
    // }
    // return false;
    

    //without end condition of the loop:
    // for(int i=1;;i++){ // loop to find the factorial of a number till factorial is less than the number.
    //     if(n==0){ // 0! is 1 so if n is 0 then return false.
    //         return false; //stop the loop if n is 0.
    //     };
    //     f*=i;
    //     if(f==n){
    //         return true; //stop the loop if f is equal to n.
    //     }
    //     if(f>n){
    //         return false; //stop the loop if f is greater than n.
    //     }
    // }

}

int main(){
    cout<<"Enter the number to check: ";
    int n;
    cin>>n;
    if(isFactorial(n)){
        cout<<n<<" is a factorial number."<<endl;
    }
    else{
        cout<<n<<" is 0 or not a factorial number."<<endl;
    }
}