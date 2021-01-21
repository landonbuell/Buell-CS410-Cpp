#pragma once

#include <cmath>


class PerimeterOfEllipse {

public:
	double _a, _b;
	double _area;
	double pi;

	PerimeterOfEllipse(double axisMajor, double axisMinor);

	double RamanujanFirst();

	double RamanujanSecond();

	double MuirFormula();

	double HudsonFormula();

	double HolderMean();

	double CantrellFormula();

};

void PrintResult(std::string msg, double val);
