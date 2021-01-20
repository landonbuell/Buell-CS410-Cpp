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
		// Accept User input
		try 
		{
			std::cin >> axisA;
			std::cin >> axisB;
			break;
		}
		catch (std::exception)
		{
			std::cout << "\t ERROR! - Invalid Input";
		}

	}

	

	return 0;
}

double ParseInput() 
{

}

