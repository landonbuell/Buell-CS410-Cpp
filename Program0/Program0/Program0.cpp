#include "program0.h"

#include <string>
#include <cmath>
#include <iostream>


PerimeterOfEllipse::PerimeterOfEllipse(double axisMajor, double axisMinor)
{
    // Constructor for Ellipse Object
    pi = atan(1) * 4;
    _a = axisMajor;
    _b = axisMinor;    
    _area = _a * _b * pi;
}

double PerimeterOfEllipse::RamanujanFirst()
{
    // Ramanujan's First Perimeter Approximation
    double x, y, z;
    x = 3 * (_a + _b);
    y = (3 * _a + _b) * (_a + 3 * _b);
    z = x - pow(y, 1 / 2);
    return pi * z;
}

void PrintResult(std::string msg, double val)
{
    std::cout << msg << val << std::endl;
}
