#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

//class type exception handling

class error{
    int err_code;
    char *err_desc;
    public:
    error(int c,const char* d){
        err_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    };

    void err_display(void){
        cout<<"Error code: "<<err_code<<endl;
        cout<<"Error description: "<<err_desc<<endl;
    }
};

int main(){
    try{
        throw error(99,"test exception");
    }
    catch(error& e){
        cout<<"Exception caught successfully."<<endl;
        e.err_display();
    return 0;
    }
}