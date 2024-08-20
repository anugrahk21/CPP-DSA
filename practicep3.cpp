#include <iostream>
#include <string>
using namespace std;

struct Book {
    string name;
    double price;
};

class BookInfo {
public:
    void setBook(string n, double p) {
        book.name = n;
        book.price = p;
    }

    string getBookName() {
        return book.name;
    }

    double getBookPrice() {
        return book.price;
    }

private:
    Book book;
};

int main() {
    BookInfo bookInfo;

    bookInfo.setBook("The Great Gatsby", 10.99);
    cout << "Book Name: " << bookInfo.getBookName() << endl;
    cout << "Book Price: $" << bookInfo.getBookPrice() << endl;

    return 0;
}