#ifndef CAR_H
#define CAR_H

#include <string>
#include <ostream>

class Car {
private:
    int seat_number;
    std::string engine;
    bool tripComputer;
    bool GPS;
public:
    void setSeatNumber(int seats);
    void setEngineType(const std::string& engine);
    void enableTripComputer();
    void enableGPS();
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

#endif