#pragma once
#include "Vehicle.h"

class Motorcycle: public Vehicle
{
public:

	Motorcycle(std::string make, std::string model);
	void set_engine_capacity_sidecar(double e, bool s);
	void set_engine_capacity_sidecar(float e, bool s);
	double get_engine_capacity();
	bool get_has_sidecar();

private:

	double engine_capacity;
	bool has_sidecar;
	
};

