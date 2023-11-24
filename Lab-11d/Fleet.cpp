#include "Fleet.h"
#include <iostream>

void Fleet::set_Car_info(std::string make, std::string model, double y, double d)
{
	n2.set_make_and_model(make, model);
	n2.set_year_and_doors(y, d);
}

void Fleet::set_Truck_info(std::string make, std::string model, double e, double w)
{
	n1.set_payloadCapacity_wheels(e, w);
	n1.set_make_and_model(make, model);
}

Fleet::Fleet(std::string carMake, char carModel, double carYear, double carDoors,
	std::string truckMake, std::string truckModel, double truckEngine, double truckWheels)
	: n1(truckMake, truckModel), n2(carMake, carModel) 
{
	n1.set_payloadCapacity_wheels(truckEngine, truckWheels);
	n2.set_year_and_doors(carYear, carDoors);
}

std::string Fleet::getCarMake()
{
	return n2.get_make();
}

std::string Fleet::getCarModel()
{
	return n2.get_model();
}

int Fleet::getCarYear()
{
	return n2.get_year();
}

int Fleet::getCarNumDoors()
{
	return n2.get_doors();
}

std::string Fleet::getTruckMake()
{
	return n1.get_make();
}

std::string Fleet::getTruckModel()
{
	return n1.get_model();
}

double Fleet::getTruckPayloadCapacity()
{
	return n1.get_payload_capacity();
}

int Fleet::getTruckNumWheels()
{
	return n1.get_num_wheels();
}