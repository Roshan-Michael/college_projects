//#include "Car.h"

void Car::set_year_and_doors(int y, int d)
{
	year = y;
	num_doors = d;
}

void Car::set_year_and_doors(double y, double d)
{
	year = y;
	num_doors = d;
}

int Car::get_year()
{
	return year;
}

int Car::get_doors()
{
	return num_doors;
}

Car::Car(std::string make, char model)
{
	Vehicle::set_make_and_model(make, model);

	year = 2023;
	num_doors = 5;
}

Car::Car()
{
	year = 0;
	num_doors = 0;
}
