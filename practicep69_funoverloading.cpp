#include <iostream>
using namespace std;

//function OVERLOADING

class A {
public:
    // Method to add two integers
    int add(int a, int b) {
        int c = a + b;
        cout << "Sum of two integers: " << c << endl;
        return c;
    }

    // Overloaded method to add three integers
    int add(int a, int b, int d) {
        int c = a + b + d;
        cout << "Sum of three integers: " << c << endl;
        return c;
    }

    // Overloaded method to add two double values
    double add(double a, double b) {
        double c = a + b;
        cout << "Sum of two doubles: " << c << endl;
        return c;
    }
};

int main() {
    A a;
    a.add(1, 2);          // Calls the add method with two integers
    a.add(1, 2, 3);       // Calls the overloaded add method with three integers
    a.add(1.5, 2.3);      // Calls the overloaded add method with two doubles

    return 0;
}
