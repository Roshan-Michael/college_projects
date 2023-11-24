#include <iostream>
#include <string>
#include "PhysicalStore.h"
#include "WebStore.h"
#include <iomanip>
#include "GroceryStore.h"

int main()
{
	Store a;
	WebStore b("GAP", 5, "www.GAP.com", true);
	PhysicalStore c("Target", 4, "123 N. east street", false);
	GroceryStore d("farmers market", 2, "42 7th Avenue", true, true, false);

	std::cout << std::boolalpha << std::endl;

	a.printMemberInfo();
	std::cout << std::endl;

	b.printMemberInfo();
	std::cout << std::endl;

	c.printMemberInfo();
	std::cout << std::endl;

	d.printMemberInfo();
	std::cout << std::endl;

	return 0;
}