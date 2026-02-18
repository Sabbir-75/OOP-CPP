#include <iostream>
using namespace std;
class Car
{
public:
    string make;
    string model;
    int year;
    float price;

    Car(string mk, string mdl, int yr, float pr)
    {
        make = mk;
        model = mdl;
        year = yr;
        price = pr;
    }

    void displayInfo()
    {
        cout << "Make : " << make << "\n";
        cout << "Model : " << model << "\n";
        cout << "Year : " << year << "\n";
        cout << "Price : " << price << "\n";
        // cout << "price : " << percentageMarks() << "%" << "\n";
        cout << "==============================" << "\n";
    }

    void applyDepreciation(float percentage)
    {
        price = price - ((price * percentage) / 100);
    }

    bool isAntique(int presentYear){
        if ((presentYear - year) > 25)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};

int main()
{
    Car car1("Toyota", "Corolla", 2022, 950000);
    car1.displayInfo();

    Car car2("Honda", "Civic", 1990, 880000);
    car2.displayInfo();

    Car car3("BMW", "X5", 2010, 900000);
    car3.displayInfo();

    cout << "After Depreciation:\n";
    car1.applyDepreciation(10);
    car1.displayInfo();

    car2.applyDepreciation(5);
    car2.displayInfo();

    int currentYear = 2026;
    if (car2.isAntique(currentYear))
    {
        cout << "Car2 is Antique\n";
    }
    else
    {
        cout << "Car2 is Not Antique\n";
    }
    
    

    return 0;
}