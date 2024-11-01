#include <iostream>
using namespace std;

// Basic to basic conversion

class time{
    int hours;
    public:
    time(int t){
        hours=t/60;
    };

    void display(){
        cout<<"Hours: "<<hours<<endl;
    }
};

class student{
    private:
    int rollno;
    float fees;
    public:
    student(int a,int b){
        rollno=a;
        fees=b;
    };

    operator int(){
        return rollno;
    };

    operator float(){
        return fees;
    };
};
int main(){
    cout<<"Minutes: ";
    int min;
    cin>>min;
    time t1(min);
    t1.display();
}