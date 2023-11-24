#include "WebStore.h"

WebStore::WebStore()
{
	webAddress = "https://walmart.com";
	hasDroneDelivery = false;
}

WebStore::WebStore(std::string Name, double r, std::string wAddress, bool dDelivery)
{
	Store::setNameAndRevenue(Name, r);
	webAddress = wAddress;
	hasDroneDelivery = dDelivery;
}

void WebStore::printMemberInfo()
{
	Store::printMemberInfo();

	std::cout << "WebAddress: " << webAddress << std::endl;
	std::cout << "Has Drone Delivery: " << hasDroneDelivery << std::endl;

}









