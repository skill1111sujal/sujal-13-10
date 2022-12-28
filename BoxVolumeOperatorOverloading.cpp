#include <iostream>
using namespace std;

class BoxVolume
{
    public:

    float length;
    float width;
    float height;

    void readData()
    {
        cout << "length: ";
        cin >> 'BoxVolume::length';
        cout << "width: ";
        cin >> 'BoxVolume::width';
        cout << "height: ";
        cin >> 'BoxVolume::height';
    }
    void completevolume()
    {
        float volume;
        volume = 'void readData()::length' * 'void readData()::width' * 'void readData()::height';
    }

    void dispData()
    {
        cout << "Volume is:" << 'void computeVolume()::volume';
    }
};    
int main()
{1
    BoxVolume obj1,obj2,obj3;
    obj1.readData();
    obj2.computeVolume();
    obj3.dispData();

};