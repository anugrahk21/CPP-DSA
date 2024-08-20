// #include <iostream>
// using namespace std;

// union Car{

//     string name;
//     int year;
//     double price;
// }myCar;

// int main(){
//     cout<<"Enter name: ";
//     cin >> myCar.name;
//     cout<<"Enter year: ";
//     cin >> myCar.year;
//     cout<<"Enter price: ";
//     cin >> myCar.price;
//     cout << "Name: " << myCar.name << endl;
//     cout << "Year: " << myCar.year << endl;
//     cout << "Price: " << myCar.price << endl;
// };

#include <iostream>
using namespace std;

union Car{

    char name[50];
    int year;
    double price;
};

int main(){
    Car myCar;
    cout<<"Enter name: ";
    cin.get(myCar.name,50);
    cout << "Name: " << myCar.name << endl;
    cout<<"Enter year: ";
    cin >> myCar.year;
    cout << "Year: " << myCar.year << endl;
    cout<<"Enter price: ";
    cin >> myCar.price;
    cout << "Price: " << myCar.price << endl;
};
