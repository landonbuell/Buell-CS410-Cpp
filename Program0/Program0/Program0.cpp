
#include "program0.h"
#include <cmath>
#include <string>
#include <iostream>


PerimeterOfEllipse::PerimeterOfEllipse(double axisMajor, double axisMinor)
{
    // Constructor for Ellipse Object
    pi = 3.14159;
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
    z = x - pow(y, 0.5);
    return pi * z;
}

double PerimeterOfEllipse::RamanujanSecond()
{
    // Ramanujan's Second Perimeter Approximation
    double h, x, y, z;
    h = pow(_a - _b, 2) / pow(_a + _b, 2);
    x = pi * (_a + _b);
    y = 3 * h;
    z = pow(10 + (4 - 3 * h),0.5);
    return x * (1 + y / z);
}

double PerimeterOfEllipse::MuirFormula()
{
    // Muir's Formula for the Perimeter
    double s, x, y, z;
    s = 1.5;
    x = pow(_a, s) / 2;
    y = pow(_b, s) / 2;
    z = pow(x + y, 1 / s);
    return 2 * pi * z;
}

double PerimeterOfEllipse::HudsonFormula()
{
    // Hudson's Formula for the Perimeter
    double h, x, y, z;
    h = pow(_a - _b, 2) / pow(_a + _b, 2);
    x = 0.25 * pi * (_a + _b);
    y = 3 * (1 + h / 4) + 1;
    z = 1 - h / 4;
    return x * (y / z);
}

double PerimeterOfEllipse::HolderMean()
{
    // Holder Mean Formula for Perimeter of an Ellipse
    double s, x, y, z;
    s = log(2) / log(pi / 2);
    x = pow(_a, s);
    y = pow(_b, s);
    z = pow(x + y, 1 / s);
    return 4 * z;
}

double PerimeterOfEllipse::CantrellFormula()
{
    // Cantrell's formula for the perimeter
    double s, x, y, z;
    s = 0.825056;
    x = MuirFormula() / (2 * pi);
    y = 4 * (_a + _b);
    z = 2 * (4 - pi) * _a * _b;
    return y - (z / x);
}

void PerimeterOfEllipse::ShowAllResults()
{
    // Compute and Print out all results in order
    PrintResult("Ramanujan's 1st: ", RamanujanFirst());
    PrintResult("Ramanujan's 2nd: ", RamanujanSecond());
    PrintResult("Muir's Formula: ", MuirFormula());
    PrintResult("Hudson's Formula: ", HudsonFormula());
    PrintResult("Holder Mean: ", HolderMean());
    PrintResult("Cantrell Formula: ", CantrellFormula());
}

void PrintResult(std::string msg, double val)
{
    // Print Name and value of single computation
    std::cout << msg << val << std::endl;
}
