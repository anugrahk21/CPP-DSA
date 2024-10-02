#include <iostream>
#include <fstream>
using namespace std;

void write(){
    ofstream fout;
    fout.open("country.txt");
    fout<<"India\n";
    fout<<"USA\n";
    fout<<"UK\n";
    fout.close();

    fout.open("capital.txt");
    fout<<"Delhi\n";
    fout<<"Washington\n";
    fout<<"London\n";
    fout.close();
};
void read(){
    const int n=80;
    char s[80];
    ifstream fin;
    fin.open("country.txt");
    while(fin){
        fin.getline(s,n);
        cout<<s<<endl;
    }
    fin.close();

    fin.open("capital.txt");
    while(fin){
        fin.getline(s,n);
        cout<<s<<endl;
    }
    fin.close();
}

int main(){
    char s[30];
    ofstream of("result");
    of<<"Hello";
    of.close();
    cout<<"Data saved\n";
    ifstream inf("result");
    inf>>s;
    cout<<s<<endl;
    inf.close();
    cout<<endl;
    
    write();
    read();
    return 0;

}