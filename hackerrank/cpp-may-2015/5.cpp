#include <iostream>
#include <iomanip>
using namespace std;

class Polygon {
protected:
    double width;
    double height;
public:
    Polygon(double _width, double _height) {
        width  = _width;
        height = _height;
    }
    virtual double area() = 0;
};

Polygon* area(double width,double height){
  return width*height;
}

int main()
{
    double width, height;
    cin >> width >> height;

    Polygon *rectangle = new Rectangle(width, height);
    Polygon *triangle  = new Triangle(width, height);

    cout << setprecision(1) << fixed << rectangle->area() << "\n"  <<triangle->area() << endl;

    return 0;
}
