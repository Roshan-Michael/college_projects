#include "Tire.h"
#include <iostream>

void Tire::inflateTire(int psi)
{
	std::cout << "inflating tire to " << psi << " psi." << std::endl;
}

Tire::Tire()
{
	tireSize = "N/A";
}

void Tire::setSize(std::string size)
{
	tireSize = size;
}

std::string Tire::getTireSize()
{
	return tireSize;
}
