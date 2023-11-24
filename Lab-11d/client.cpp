#include <iostream>
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Vehicle.h"
#include "Fleet.h"

int main()
{
	Vehicle a;
	Car b("Tesla", 'Y');
	Truck c("Ford", "F250");
	Motorcycle d("Harley davidson", "Road King");

	std::cout << std::boolalpha;

	a.set_make_and_model("Ford", "Taurus");
	b.set_year_and_doors(2022, 2);
	c.set_payloadCapacity_wheels(3217, 4);
	d.set_engine_capacity_sidecar(1746.0, false);

	std::cout << "Vehicle 1: " << std::endl << "Make: " << a.get_make() 
		      << std::endl << "Model: " << a.get_model() << std::endl << std::endl;

	std::cout << "Vehicle 2: " << std::endl << "Make: " << b.get_make() 
		      << std::endl << "Model: " << b.get_model() << std::endl 
		      << "No. of doors: " << b.get_doors()
		      << std::endl << "Year: " << b.get_year() << std::endl << std::endl;

	std::cout << "Vehicle 3: " << std::endl << "Make: " << c.get_make()
		      << std::endl << "Model: " << c.get_model() << std::endl
		      << "Payload capacity: " << c.get_payload_capacity()
		      << std::endl << "No. of wheels: " << c.get_num_wheels() << std::endl 
		      << std::endl;

	std::cout << "Vehicle 4: " << std::endl << "Make: " << d.get_make()
			  << std::endl << "Model: " << d.get_model() << std::endl
			  << "Engine Capacity: " << d.get_engine_capacity()
			  << std::endl << "Has side car: " << d.get_has_sidecar() << std::endl
			  << std::endl << std::endl;

	std::cout << "Rental car fleet" << std::endl << std::endl;

	Fleet myFleet("Toyota", 'Y', 2001, 4, "Dodge", "1500", 3217.0, 4);

	std::cout << "Car Make: " << myFleet.getCarMake() << std::endl;
	std::cout << "Car Model: " << myFleet.getCarModel() << std::endl;
	std::cout << "Car Year: " << myFleet.getCarYear() << std::endl;
	std::cout << "Car Number of Doors: " << myFleet.getCarNumDoors() << std::endl << std::endl;

	std::cout << "Truck Make: " << myFleet.getTruckMake() << std::endl;
	std::cout << "Truck Model: " << myFleet.getTruckModel() << std::endl;
	std::cout << "Truck Payload Capacity: " << myFleet.getTruckPayloadCapacity() << std::endl;
	std::cout << "Truck Number of Wheels: " << myFleet.getTruckNumWheels() << std::endl;

	return 0;
}