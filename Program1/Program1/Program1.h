#pragma once

#include <iostream>
#include <tuple>

class ArgumentParser
{
public:
	float pt1 [2];
	float pt2 [2];

	void GetInput();

};

class PointSystem
{
public:

	float _x1, _y1;
	float _x2, _y2;

	PointSystem(float x1, float y1, float x2, float y2);

	float CartesianDistance();

	float SweepAngle();

	float BearingAngle();

};

static class Conversions
{
public:

	static float DegToRad(float deg);

	static float RadToDeg(float rad);

	static float MtrsToFt(float mtr);

};