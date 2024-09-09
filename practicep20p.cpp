#include <iostream>
using namespace std;
//function overloading

class sumfunctions{
    public:
    void sum(int a, int b){
        cout << "Sum of two integers: " << a + b << endl;
    };
    void sum(double a, double b){
        cout << "Sum of two doubles: " << a + b << endl;
    };
    void sum(char a, char b){
        cout<< "Sum of two characters: " << a<<b << endl;
    };
};

int main() {
    sumfunctions s;
    int x,y;
    char p,q;
    double m,n;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Enter two doubles: ";
    cin >> m >> n;
    cout << "Enter two characters: ";
    cin >>p >>q;
    s.sum(x, y);
    s.sum(p, q);
    s.sum(m, n);

} 