#include "program0.h"

#define _USE_MATH_DEFINES 

#include <cmath>

PerimeterOfEllipse::PerimeterOfEllipse(double axisMajor, double axisMinor)
{
}

double PerimeterOfEllipse::RamanujanFirst()
{
    // Ramanujan's First Perimeter Approximation
    double x, y, z;
    x = 3 * (_a + _b);
    y = (3 * _a + _b) * (_a + 3 * _b);
    z = x - pow(y, 1 / 2);
    return M_PI * z;
}
