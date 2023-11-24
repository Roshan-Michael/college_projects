#pragma once
#include "Vehicle.h"

class Car: public Vehicle
{
public:

	Car(std::string make, char model);
	Car();
	void set_year_and_doors(int y, int d);
	void set_year_and_doors(double y, double d);
	int get_year();
	int get_doors();

private:

	int year;
	int num_doors;
};

