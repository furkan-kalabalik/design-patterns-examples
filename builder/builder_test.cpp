#include <iostream>

#include "CarBuilder.h"
#include "CarManualBuilder.h"

int main(int argc, char const *argv[])
{
    CarBuilder carBuilder{};
    CarManualBuilder manualBuilder{};
    
    carBuilder.setSeats(3).setEngine("V8").setGPS();
    std::cout << carBuilder.build() << std::endl;
    carBuilder.reset();
    std::cout << carBuilder.build() << std::endl;

    manualBuilder.setEngine("V10").setSeats(2).setTripComputer().setTripComputer();
    std::cout << manualBuilder.build() << std::endl;
    return 0;
}
