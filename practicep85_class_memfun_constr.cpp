#include <iostream>
#include <string>
using namespace std;

//program to record sales of a product and calculate total revenue and final stock quantity
//using a class named Product and its member functions
//using a constructor to initialize the product details

class Product {
private:
    string name;
    int price;
    int stock;
    int totalRevenue=0;

public:
    Product(string n,int p,int s){
        name=n; //we don't need to use this->name=n; because the variable names are different
        price=p;
        stock=s;
    }

    void recordSale(int quantity) {
       if(quantity>stock){
           cout<<"Not enough stock for this sale";
           return;
       }
       else{
           stock-=quantity;
           totalRevenue+=quantity*price;
       }
    };

    ~Product() {
        cout << "Total revenue: " << totalRevenue << endl;
        cout << "Final stock quantity: " << stock << endl;
    }
};

int main() {
    string name;
    int price;
    int stock;

    cin >> name >> price >> stock;
    Product product(name, price, stock);

    int quantity;
    while (true) {
        cin >> quantity;
        if (quantity == 0) {
            break;
        }
        product.recordSale(quantity);
    }

    return 0;
}
