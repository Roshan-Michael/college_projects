#pragma once
#include "Truck.h"
#include "Car.h"

class Fleet
{
public:

	Fleet(std::string carMake, char carModel, double carYear, double carDoors,
		std::string truckMake, std::string truckModel, double truckEngine, double truckWheels);
	void set_Truck_info(std::string make, std::string model, double e, double w);
	void set_Car_info(std::string make, std::string model, double y, double d);
	
	std::string getCarMake();
	std::string getCarModel();
	int getCarYear();
	int getCarNumDoors();

	std::string getTruckMake();
	std::string getTruckModel();
	double getTruckPayloadCapacity();
	int getTruckNumWheels();

private:

	Truck n1;
	Car n2;
};

