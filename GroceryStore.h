#pragma once
#include "PhysicalStore.h"

class GroceryStore : public PhysicalStore
{
public:

	void printMemberInfo();
	GroceryStore();
	GroceryStore(std::string Name, double r, std::string pAddress, bool wifi, bool hProduce, bool iChain);

private:

	bool hasProduce;
	bool isChain;
};

