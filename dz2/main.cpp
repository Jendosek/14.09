#include <iostream>
using namespace std;

class Point {
    double _x, _y, _z;

public:
    Point() {
        _x = 0;
        _y = 0;
        _z = 0;
    }

    Point(double x) : Point()
    {
        SetX(x);
    }
    Point(double x, double y) : Point(x)
    {
        SetY(y);
    }
    Point(double x, double y, double z) : Point(x, y)
    {
        SetZ(z);
    }


    void SetX(double x)
    {
        _x = x;
    }
    void SetY(double y) 
    {
        _y = y;
    }
    void SetZ(double z) 
    {
        _z = z;
    }

    double GetX()
    {
        return _x;
    }

    double GetY()
    {
        return _y;
    }

    double GetZ() 
    {
        return _z;
    }

    void print()
    {
        cout << "Cordination: x: " << GetX() << " y: " << GetY() << " z: " << GetZ();
    }
};

int main() {
    Point point;
  
    point.SetX(10);
    point.SetY(20);
    point.SetZ(30);

    point.print();

    return 0;
}