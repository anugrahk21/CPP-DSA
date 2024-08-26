#include <iostream>
using namespace std;

class test{
    int code;
    static int count;
    public:
    void setcode(){
        code = ++count; //here code of each object is stored differently or is different.
    }
    void showcode(){
        cout<<"Code: "<<code<<endl;

    }
    static void showcount(){
        cout<<"Total Codes: "<<count<<endl; //count will be same for all objects as its a static variable

    }
};

int test::count;

int main(){
    test t1,t2;
    t1.setcode(); //count=1;
    test::showcount(); //calling static function
    t2.setcode(); //count=2;
    test::showcount();

    test t3;
    t3.setcode(); //count=3;

    test::showcount();
    t1.showcode(); //t1 having code=1;
    t2.showcode(); //t2 having code=2;
    t3.showcode(); //t3 having code=3;
}
