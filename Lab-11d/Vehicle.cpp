#include "Vehicle.h"
#include <iostream>

void Vehicle::set_make_and_model(std::string mk, std::string m)
{
	make = mk;
	model = m;
}

void Vehicle::set_make_and_model(std::string mk, char m)
{
	make = mk;
	model = m;
}

std::string Vehicle::get_make()
{
	return make;
}

std::string Vehicle::get_model()
{
	return model;
}

Vehicle::Vehicle()
{
	make = "N/A";
	model = "N/A";
}