#include <iostream>
#include "math1.h"
using namespace std;

double CalculatePerimeter(const Triangle& t)
{
    return t.a + t.b + t.c;
}

double CalculateArea(const Triangle& t)
{
    return (t.c * t.height) / 2.0;
}
