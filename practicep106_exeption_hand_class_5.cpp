#include <iostream>
using namespace std;

// EException handling
//multiple conditions in exception handling(catch block)

class InvalidPasswordException{
    public:
    string password;
    InvalidPasswordException(string a){
        this->password=a;
    };
    void val(){
        bool j=false;
        if(password.length()<6){
            throw 1;
        };
        for(int i=0;i<password.length();++i){
            if(isdigit(password[i])){
                j=true;
                break;
            }
        };
        if(j==false){
            throw 2;
        };
    }
};

int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    try{
        InvalidPasswordException e1(b);
        e1.val();
        cout<<"Password is correct"<<endl;
    }
    catch (int e) {
        if (e == 1) {
            // Password length is too short
            cout << "Password must be at least 6 characters long." << endl;
            cout << "Caught by exception, invalid password format!" << endl;
        }
        else if (e == 2) {
            // Password doesn't contain a digit
            cout << "Password must have at least one digit (0-9)" << endl;
            cout << "Caught by exception, invalid password format!" << endl;
        }
    };
}