#include <iostream>
using namespace std;

//program to demonstrate the use of multiple catch blocks

int main ()
{
    int i=1;
    int j=2;
    try
    {
        while(1){
            throw 20; //if this is executed, the below code/throws will not be executed
            throw 5;
            break;
            
        }
        // if(i==1)
        // {
        //     throw i; //if this is executed, the below code/throws will not be executed
        // }
        // else
        // {
        //     throw j;
        // }
    }
    catch(int k)
    {
        cout<<k;
    }
    catch(int r)
    {
        cout<<r;
    }
    return 0;
}