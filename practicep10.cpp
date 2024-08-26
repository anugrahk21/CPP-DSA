#include <iostream>
using namespace std;

class MyClass {
    static int count;

public:
    static void incrementCount() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int MyClass::count = 0;

int main() {
    MyClass::incrementCount();
    MyClass::incrementCount();
    cout << MyClass::getCount();
    return 0;
}