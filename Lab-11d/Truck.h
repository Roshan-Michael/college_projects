#pragma once
#include "Vehicle.h"

class Truck: public Vehicle
{
public:

	Truck(std::string make, std::string model);
	Truck();
	void set_payloadCapacity_wheels(int c, int w);
	void set_payloadCapacity_wheels(double c, double w);
	int get_payload_capacity();
	int get_num_wheels();

private:

	int payload_capacity;
	int num_wheels;
};

