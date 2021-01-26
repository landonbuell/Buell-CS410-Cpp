// Landon Buell
// 11 Jan 2020


#include <iostream>
#include <string>

#include "program0.h"

int main()
{
	// Main Function

	double axisA,axisB;
	while (true)
	{
		try 
		{
			// Repeatedly Accept Input
			std::cout << "Enter major Axis: ";
			std::cin >> axisA;
			std::cout << "Enter minor Axis: ";
			std::cin >> axisB;
			
			// Convert to Doubles?
			break;
		}
		catch (std::exception)
		{
			std::cout << "\t ERROR! - Invalid Input" << std::endl;
		}

	}

	// Show results to user, make class instance 
	std::cout << "Major Axis: " << axisA << std::endl;
	std::cout << "Minor Axis: " << axisB << std::endl;
	PerimeterOfEllipse Ellipse(axisA, axisB);
	Ellipse.ShowAllResults();

	return 0;
}


