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

    friend void display(Box values);
    friend class VolumeCalculator;
};
void display(Box values)
{
    cout << "length : " << values.length << "\n";
    cout << "width : " << values.width << "\n";
    cout << "height : " << values.height << "\n";
    cout << "----------------------------\n";
};
class VolumeCalculator
{
public:
    float vocalc(Box values)
    {
        float volume = values.length * values.width * values.height;
        return volume;
    }
};

int main()
{
    Box box1(12, 14, 16);
    display(box1);

    VolumeCalculator vlmcalc;
    cout << "Volume For Box 1 : " << vlmcalc.vocalc(box1) << "\n\n";

    Box box2(12.45, 14.55, 16.45);
    display(box2);
    cout << "Volume For Box 2 : " << vlmcalc.vocalc(box2) << "\n";

    return 0;
}