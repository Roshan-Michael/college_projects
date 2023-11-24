#pragma once
#include "Store.h"

class PhysicalStore: public Store
{
public:

	PhysicalStore();
	PhysicalStore(std::string Name, double r, std::string address, bool wifi);
	void printMemberInfo();
	void setPhysicalAddress_Wifi(std::string pAddress, bool wifi);
	std::string getAddress();
	bool getWifi();

private:

	std::string physicalAddress;
	bool hasWifi;
	
};

