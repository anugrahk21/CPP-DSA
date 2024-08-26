#include <iostream>
using namespace std;

 //enumeration

enum seasons{
    spring=2, summer, autumn, winter=89 //default value of spring is 0. But we can change it. Then all the 
    //other values are like 2+1,3+1...
};

//Directly Using Enum Values in Code
int function1(){
    seasons s;
    s=autumn;
    //s=rainy; error as seasons does not have rainy as a value;
    cout<<s<<endl;
}


//Directly Using Enum Values in Code 
int function2(){
    int s;
    cin >> s;
    if(s==spring){
        cout<<"Spring";
    }
    else if (s==summer){
        cout<<"Summer";
    }
    else if (s==autumn){
        cout<<"Autumn";
    }
    else if (s==winter){
        cout<<"Winter";
    }
    else{
        cout<<"Invalid season";
    };
};
int main(){
    function1();
    function2();
};
