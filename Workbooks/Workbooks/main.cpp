#include <iostream>
#include <format>
#include <limits>
#include <cstdint>


int BurnOneLap(float fuel, float burnRate)
{
	int lapCount{ 0 };
	while (fuel > 0)
	{
		fuel -= burnRate;
		++lapCount;
	}
	std::cout << std::format("Laps completed: {}\n , fuel remaining is {}L", lapCount, fuel);
	return fuel;
}



void main ()
{
	BurnOneLap(60.0f, 2.4f);
}