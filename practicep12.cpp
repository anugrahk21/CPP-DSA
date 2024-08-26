#include <iostream>
#include <iomanip> // Ensure this is included for setprecision and fixed
using namespace std;

int fun1() {
    double value = 123.456789;

    // Format and print the value with 2 decimal places in a single line
    cout << "Formatted value: " << fixed << setprecision(2) << value << endl;

    return 0;
}

int fun2() {
    int n;
    cin >> n;
    

    //setw(a)->set width to a and setfill(b)->fill the area with b

    // Format and print the number with leading zeros to make it 9 digits long
    //example:n=123 then cout=000000123
    cout << setw(9) << setfill('0') << n << endl;

    return 0;
};

int main(){
    fun1();
    fun2();
    return 0;
};