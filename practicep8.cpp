#include <iostream>
using namespace std;

//static data member value are same for every every object.
class item{
    static int count;
    int number;
    public:
    void getdata(int d){
        number=d;
        count++;
    }
    void getcount(){
        cout<<count<<" "; //here count will be same for every object.
    }

};

int item::count;

int main(){
    item a,b,c;
    cout<<"before reading:"<<" ";
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"after reading:"<<" ";
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}