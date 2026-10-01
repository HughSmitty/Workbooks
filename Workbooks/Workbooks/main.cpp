#include <iostream>
#include <format>
#include <limits>
#include <cstdint>


class FuelTank
{
public:
    FuelTank() = default;

    FuelTank(float capacityLitres)
        : currentLitres(capacityLitres), capacityLitres(capacityLitres)
    {
    }

    float currentLitres{ 0.0f };
    float capacityLitres{ 0.0f };
};

void Problem05()
{
    FuelTank tank;
    tank.capacityLitres = 60.0f;
    tank.currentLitres = 45.0f;

    std::cout << std::format("{:.1f} / {:.1f}\n", tank.currentLitres, tank.capacityLitres);

    tank.currentLitres = 500.0f;        // nothing stops this
    tank.capacityLitres = -12.0f;       // or this
    tank.currentLitres = 45.0f;
    tank.capacityLitres = 20.0f;        // or this — capacity now below current

    std::cout << std::format("{:.1f} / {:.1f}\n", tank.currentLitres, tank.capacityLitres);
}

int main()
{
    Problem05();
}