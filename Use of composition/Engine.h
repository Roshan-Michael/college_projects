#pragma once
#include <iostream>

class Engine
{
public:

	void accelerate();
	void startEngine();
	Engine();
	void setEngineVolume(int v);
	double getEngineVolume();


private:

	double engineVolume;
};

