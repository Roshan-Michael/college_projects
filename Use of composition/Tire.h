#pragma once
#include <string>


class Tire
{
public:

	void inflateTire(int psi);
	void setSize(std::string size);
	Tire();
	std::string getTireSize();

private:

	std::string tireSize;
};

