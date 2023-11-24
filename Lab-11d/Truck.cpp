#include "Truck.h"

void Truck::set_payloadCapacity_wheels(int c, int w)
{
	payload_capacity = c;
	num_wheels = w;
}

void Truck::set_payloadCapacity_wheels(double c, double w)
{
	payload_capacity = c;
	num_wheels = w;
}

int Truck::get_payload_capacity()
{
	return payload_capacity;
}

int Truck::get_num_wheels()
{
	return num_wheels;
}

Truck::Truck(std::string make, std::string model)
{
	Vehicle::set_make_and_model(make, model);

	payload_capacity = 2000;
	num_wheels = 4;
}

Truck::Truck()
{
	payload_capacity = 0;
	num_wheels = 0;
}
