#pragma once
#include <iostream>
#include <string>

class Store
{
public:

	void setNameAndRevenue(std::string n, double r);
	std::string getName();
	double getRevenue();
	Store();
	void printMemberInfo();

private:

	std::string name;
	double revenue; // in billions
	
};

