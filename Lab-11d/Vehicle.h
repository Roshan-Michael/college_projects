#pragma once
#include <iostream>

class Vehicle
{
public:

	Vehicle();
	void set_make_and_model(std::string mk, std::string m);
	void set_make_and_model(std::string mk, char m);
	std::string get_make();
	std::string get_model();

private:

	std::string make;
	std::string model;

};

