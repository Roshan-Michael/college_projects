#pragma once
#include "Engine.h"
#include "Tire.h"
#include "Door.h"

class Car
{
public:

	void beginDrive();
	Car(double eVolume, std::string tireSize);
	double getVolume();
	std::string getSize();

private:

	Engine engineObject;
	Tire tireObject[4];
	Door driverDoor;
	Door passengerDoor;
};

