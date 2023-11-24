#include "Engine.h"
#include <iostream>

void Engine::startEngine()
{
	std::cout << "Starting engine..." << std::endl;
}

void Engine::accelerate()
{
	std::cout << "Accelerating..." << std::endl;
}

Engine::Engine()
{
	engineVolume = 0;
}

void Engine::setEngineVolume(int v)
{
	engineVolume = v;
}

double Engine::getEngineVolume()
{
	return engineVolume;
}