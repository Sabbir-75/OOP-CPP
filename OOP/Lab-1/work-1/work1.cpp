#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;
    int pages;

    Book(string ttl, string auth, int pg, float pr)
    {
        pages = pg;
        title = ttl;
        author = auth;
        price = pr;
    }

    void displayInfo()
    {
        cout << "Title : " << title << "\n";
        cout << "Author : " << author << "\n";
        cout << "Price : " << price << "\n";
        cout << "Pages : " << pages << "\n";
        cout << "================================\n";
    }

    void applyDiscount(float discountPercent)
    {
        price = price - ((price * discountPercent) / 100);
    }
};

int main()
{
    // Create three objects of the Book class
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 218, 10.99);
    Book book2("1984", "George Orwell", 328, 15.99);
    Book book3("To Kill a Mockingbird", "Harper Lee", 281, 12.99);

    // Display information of each book
    book1.displayInfo();
    book2.displayInfo();
    book3.displayInfo();

    // Apply a discount to the first book and display updated information
    cout << "\nAfter applying 10% discount to the first book:\n";
    book1.applyDiscount(10);
    book1.displayInfo();

    return 0;
}
