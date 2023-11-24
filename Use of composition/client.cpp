#include <iostream>
#include "Car.h"
#include <string>

int main()
{
	Car myCar(3.0, "P215/65R15");

	std::cout << "Engine volume (litres): " << myCar.getVolume() << std::endl 
		      << "Tire size: " << myCar.getSize() << std::endl << std::endl;

	myCar.beginDrive();

	return 0;
	
}