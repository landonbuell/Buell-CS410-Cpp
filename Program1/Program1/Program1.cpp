#include "Program1.h"
#include <cmath>

PointSystem::PointSystem(float x1, float y1, float x2, float y2)
{
	// Constructor for Point System
	_x1 = x1;
	_y1 = y1;
	_x2 = x2;
	_y2 = y2;
}

float PointSystem::CartesianDistance()
{
	// Compute cartesian distance between two points
	float dx2, dy2, dr;
	dx2 = pow(_x2 - _x1, 2);
	dy2 = pow(_y2 - _y1, 2);
	dr = sqrt(dx2 + dy2);
	return dr;
}

float PointSystem::BearingAngle()
{
	// Compute Bearing angle from point 1 to point 2
	float dx, dy;
	dx = _x2 - _x1;
	dy = _y2 - _y1;
	return atan2(dx, dy);
}

float PointSystem::SweepAngle()
{
	// Compute Sweep angle between two points
	float b1 = atan2(_x1, _y1);
	float b2 = atan2(_x2, _y2);
	return b2 - b1;
}

float Conversions::DegToRad(float deg)
{
	// Convert units of degrees to units of radians
	return 0.0;
}

float Conversions::RadToDeg(float rad)
{
	// Convert units of radians to degrees
	return 0.0;
}

float Conversions::MtrsToFt(float mtr)
{
	// Convert units of Meters to Feet
	return 0.0;
}