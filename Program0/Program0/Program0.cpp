// Landon Buell
// 11 Jan 2020

#define _USE_MATH_DEFINES 

#include <cmath>
#include <iostream>

using namespace std;


void main()
{
	// Main Function
}

class PerimeterOfEllipse 
{
	public:
		double _a;
		double _b;
		double _area;

		PerimeterOfEllipse(double axisMajor, double axisMinor)
		{
			// Constructor for Perimeter of Ellipse
			_a = axisMajor;
			_b = axisMinor;
			_area = _a * _b * M_PI;
		}

		double RamanujanFirst() 
		{
			double x = (3*_a + _b) * (_a + 3*_b);
			double y = 3 * (_a + _b);
			double z = y - pow(x,1/2);
			return M_PI * z;
		}


}
