#include <iostream>
using namespace std;
class Box
{
private:
    float length;
    float width;
    float height;

public:
    Box(float lng, float wdth, float hght)
    {
        length = lng;
        width = wdth;
        height = hght;
    }

    friend void display()
    friend class 
};
void display()
{
    cout << "length : " << length << "\n";
    cout << "width : " << width << "\n";
    cout << "height : " << height << "\n";
    cout << "==================================\n";
};
class VolumeCalculator
{
public:
    float vocalc()
    {
        float volume = length * width * height;
        return volume;
    }
};

int main()
{
    Box box1(12, 14, 16);
    box1.display();
}