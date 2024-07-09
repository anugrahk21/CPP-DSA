#include <iostream>
using namespace std;
int main(){
    string a;  //only takes one word(without get line).
    cout<<"ENTER sentence: ";
    //use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second.
    //cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words).
    getline(cin,a);  //takes the whole line of input.
    cout<<"Entered sentence: "<<a<<endl;

    int b;  //integer value without decimal points.
    cout<<"Enter a integer: ";  //displays what is written inside "".
    cin>>b;  //inputs or stores the value to the given variable.
    cout<<"Entered integer: "<<b<<endl;  //endl makes the cursor jump down from the present position.

    char c;
    cout<<"Enter a char: ";  //only takes one letter
    cin>>c;
    cout<<"Entered char "<<c<<" is valid.";

    float d;  //float value ex:123.67

    //defining a constant.
    const float pi=3.14;

    return 0;  //incidates that the program has ended.
}

