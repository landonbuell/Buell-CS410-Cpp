#pragma once

#include <cmath>

class PerimeterOfEllipse {

public:
	double _a, _b;
	double _area;

	PerimeterOfEllipse(double axisMajor, double axisMinor);

	double RamanujanFirst();

	double RamanujanSecond();

};
