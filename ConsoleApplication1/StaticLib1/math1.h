#pragma once


struct Triangle {
    double a, b, c;
    double height;
};

double CalculatePerimeter(const Triangle& t);
double CalculateArea(const Triangle& t);
