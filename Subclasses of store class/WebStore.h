#pragma once

#include "Store.h"

class WebStore: public Store
{
public:

	WebStore();
	WebStore(std::string Name, double r, std::string wAddress, bool dDelivery);
	void printMemberInfo();

private:

	std::string webAddress;
	bool hasDroneDelivery;
};

