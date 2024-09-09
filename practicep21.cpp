#include <iostream>
#include <string>
using namespace std;

union accountdata{
    struct{
        char name[10];
        int accno;
        double balance;
    }dat;
};
int main(){
    accountdata ac;
    cout << "Enter Name: ";
    cin.getline(ac.dat.name, 10);
    cout << "Enter Account Number: ";
    cin >> ac.dat.accno;
    cout << "Enter Balance: ";
    cin >> ac.dat.balance;
    cout<<"amount to be added: ";
    int addmoney;
    cin>>addmoney;
    ac.dat.balance+=addmoney;
    cout << "Updated Balance: " << ac.dat.balance << endl;
    cout<<"amount to be withdrawn: ";
    int withdrawmoney;
    cin>>withdrawmoney;
    if(withdrawmoney<=ac.dat.balance)
        ac.dat.balance-=withdrawmoney;
    else{
        cout<<"Insufficient balance"<<endl;
        cout << "Updated Balance: " << ac.dat.balance << endl;
    }
    
    return 0;
}