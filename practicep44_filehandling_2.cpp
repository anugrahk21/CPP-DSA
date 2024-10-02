#include <iostream>
#include <fstream>
using namespace std;

//file handling functions

int main(){
    ofstream fout; //write into file
    fout.open("medetail.txt");
    fout<<"Anugrah K\n";
    fout<<"1231XX\n";
    fout<<"2nd year\n";
    fout<<"CSE\n";
    fout.close();

    const int n=80;
    char s[80];
    ifstream fin; //read from file
    fin.open("medetail.txt");
    while(fin){
        fin.getline(s,n);
        cout<<s<<endl;
    }
    fin.close();



}