#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollNumber;
    float totalMarks;
    float marks[5];

    Student(string nm, int rollNbr, float totalMrk, float mrks[])
    {
        name = nm;
        rollNumber = rollNbr;
        totalMarks = totalMrk;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = mrks[i];
        }
        
    }
    void displayInfo()
    {
        cout << "Name : " << name << "\n";
    }
};
int main()
{
    float marksArr[5] = {88.8, 89.8, 56.7, 88.9, 100};
    Student student1("Sabbir", 12, 500, marksArr);
    student1.displayInfo();
    return 0;
}