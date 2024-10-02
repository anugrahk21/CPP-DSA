#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

int main(){
    string a="Hi my name is anugrah.";
    int l=a.length();
    stringstream ss(a);
    string word;
    int tlen=0,tw=0;
    while(ss>>word){
        cout<<word<<" ";
        bool q=false;
        for(char ch:word){
            if(isalpha(ch)==true){
                q=true;
            }
            else{
                q=false;
                break;
            }
        }
        if(q==true){
            tw=tw+1;
            tlen+=word.length();
        };
    };
    cout<<(tlen/tw);

}