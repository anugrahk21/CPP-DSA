#include <iostream>
#include <string.h>
using namespace std;

class string1{
    private:
    char* str;
    public:
    string1(char* s){
        int length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);
    };
    ~string1(){
        cout<<"Deleting str\n";
        delete[] str;
    };
    void display(){
        cout<<str<<endl;
    }
};

int main(){
    string1 s1("This is my computer");
    cout<<"S1=";
    s1.display();
    return 0;
}
