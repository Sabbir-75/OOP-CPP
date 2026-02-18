#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollNumber;
    float totalMarks;
    float marks[5];

    Student(string nm, int rollNbr, float mrks[])
    {
        name = nm;
        rollNumber = rollNbr;
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = mrks[i];
        }
    }

    void calculateTotalMarks()
    {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
    }
    float percentageMarks()
    {
        return (totalMarks / 500) * 100;
    }

    void displayInfo()
    {
        cout << "Name : " << name << "\n";
        cout << "Roll Number : " << rollNumber << "\n";
        cout << "Total Marks : " << totalMarks << "\n";
        cout << "Percentage : " << percentageMarks() << "%" << "\n";
        cout << "==============================" << "\n";
    }
};
int main()
{
    float marks1[5] = {88.8, 89.8, 56.7, 88.9, 100};
    Student student1("Sabbir", 02, marks1);
    student1.calculateTotalMarks();
    student1.displayInfo();


    float marks2[5] = {92.6, 88.8, 91, 89.9, 94};
    Student student2("Lubna", 01, marks2);
    student2.calculateTotalMarks();
    student2.displayInfo();


    float marks3[5] = {70.5, 65, 80.3, 60, 75};
    Student student3("Jerin", 03, marks3);
    student3.calculateTotalMarks();
    student3.displayInfo();
 
    return 0;
}