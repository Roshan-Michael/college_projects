#include "Car.h"
#include <iostream>
#include "Engine.h"

void Car::beginDrive()
{
	driverDoor.openDoor();
	std::cout << std::endl;

	engineObject.startEngine();
	std::cout << std::endl;

	passengerDoor.windowObject.rollDown();
	std::cout << std::endl;

	tireObject[0].inflateTire(32);
	std::cout << std::endl;

	engineObject.accelerate();
	std::cout << std::endl;
}

Car::Car(double eVolume, std::string tireSize)
{
	engineObject.setEngineVolume(eVolume);

	for (int i = 0; i < 4; i++)
	{
		tireObject[i].setSize(tireSize);
	}
}

double Car::getVolume()
{
	return engineObject.getEngineVolume();
}

std::string Car::getSize()
{
	return tireObject[0].getTireSize();
}