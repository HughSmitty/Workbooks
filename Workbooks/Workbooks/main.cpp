#include <iostream>
#include <format>
#include <limits>
#include <cstdint>

struct CarSetup
{
    int frontWing;
    int rearWing;
    int rideHeight;
    int tyrePressure;
    int something;
    float fuel;
};

int TotalDownforce(const CarSetup& setup)
{
    return setup.frontWing + setup.rearWing;
}

void SoftenSuspension(CarSetup& setup, float amount)
{
    setup.rideHeight += amount;
}

float FuelForLaps(int laps, float burnRate)
{
    return laps * burnRate;
}

void ApplyPitStop(const CarSetup& setup, float& fuel, float fuelTarget, int pressureChange)
{
    fuel = fuelTarget;

    std::cout << std::format(
        "   pit stop with front wing {}, pressure {:+}\n",
        setup.frontWing,
        pressureChange
    );
}

void Problem03()
{
    CarSetup setup{ 12, 18, 4, 55, 22, 45.0f };
    float fuel{ 8.0f };

    std::cout << std::format(
        "downforce: {}\n",
        TotalDownforce(setup)
    );

    std::cout << std::format(
        "fuel for 20 laps: {:.1f}\n",
        FuelForLaps(20, 2.4f)
    );

    SoftenSuspension(setup, 5.0f);

    std::cout << std::format(
        "ride height: {:.1f}\n",
        setup.rideHeight
    );

    ApplyPitStop(setup, fuel, 100.0f, 2);

    std::cout << std::format(
        "fuel after stop: {:.1f}\n",
        fuel
    );
}

int main()
{
    Problem03();
    std::cout << "haaaaaaaaaaaaaaaa";
}