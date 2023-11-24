#include "Store.h"

void Store::setNameAndRevenue(std::string n, double r)
{
	name = n;
	revenue = r;
}

std::string Store::getName()
{
	return name;
}

double Store::getRevenue()
{
	return revenue;
}

Store::Store()
{
	name = "WALMART";
	revenue = 7;
}

void Store::printMemberInfo()
{
	std::cout << "Name is: " << name << std::endl;
	std::cout << "Revenue is: $" << revenue << "B" <<  std::endl;
}

