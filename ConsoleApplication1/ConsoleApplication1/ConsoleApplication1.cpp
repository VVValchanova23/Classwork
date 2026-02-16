#include <iostream>
#include "math.h"
#include "../StaticLib1/math1.h"
using namespace std;

int main()
{
    Triangle t;
    t.a = 3.0;
    t.b = 4.0;
    t.c = 5.0;
    t.height = 4.0; 

    double perimeter = CalculatePerimeter(t);
    double area = CalculateArea(t);

    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;

}

