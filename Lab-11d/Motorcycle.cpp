#include "Motorcycle.h"

void Motorcycle::set_engine_capacity_sidecar(double e, bool s)
{
	engine_capacity = e;
	has_sidecar = s;
}

void Motorcycle::set_engine_capacity_sidecar(float e, bool s)
{
	engine_capacity = e;
	has_sidecar = s;
}

double Motorcycle::get_engine_capacity()
{
	return engine_capacity;
}

bool Motorcycle::get_has_sidecar()
{
	return has_sidecar;
}

Motorcycle::Motorcycle(std::string make, std::string model)
{
	Vehicle::set_make_and_model(make, model);

	engine_capacity = 500;
	has_sidecar = true;
}