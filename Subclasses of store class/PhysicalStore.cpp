#include "PhysicalStore.h"

PhysicalStore::PhysicalStore()
{
	physicalAddress = "4922 s broadway";
	hasWifi = false;
}

PhysicalStore::PhysicalStore(std::string Name, double r, std::string address, bool wifi)
{
	Store::setNameAndRevenue(Name, r);
	physicalAddress = address;
	hasWifi = wifi;
}

void PhysicalStore::setPhysicalAddress_Wifi(std::string pAddress, bool wifi)
{
	physicalAddress = pAddress;
	hasWifi = wifi;
}

std::string PhysicalStore::getAddress()
{
	return physicalAddress;
}

bool PhysicalStore::getWifi()
{
	return hasWifi;
}

void PhysicalStore::printMemberInfo()
{
	Store::printMemberInfo();

	std::cout << "Physical Address: " << physicalAddress << std::endl;
	std::cout << "Has Wifi: " << hasWifi << std::endl;

}
