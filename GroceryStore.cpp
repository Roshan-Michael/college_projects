#include "GroceryStore.h"
#include <iostream>
#include "PhysicalStore.h"

void GroceryStore::printMemberInfo()
{
	Store::printMemberInfo();

	std::cout << "Physical address: " << PhysicalStore::getAddress() << std::endl;
	std::cout << "Has wifi: " << PhysicalStore::getWifi() << std::endl;
	std::cout << "Has Produce: "  << std::boolalpha << hasProduce << std::endl;
	std::cout << "Is Chain: " << isChain << std::endl;
}

GroceryStore::GroceryStore()
{
	hasProduce = false;
	isChain = false;
}

GroceryStore::GroceryStore(std::string Name, double r, std::string pAddress, bool wifi, bool hProduce, bool iChain)
{
	Store::setNameAndRevenue(Name, r);
	PhysicalStore::setPhysicalAddress_Wifi(pAddress, wifi);

	hasProduce = hProduce;
	isChain = iChain;
}
