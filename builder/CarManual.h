#ifndef CAR_MANUAL_H
#define CAR_MANUAL_H

#include <string>
#include <ostream>

class CarManual {
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
    friend std::ostream& operator<<(std::ostream& os, const CarManual& car);
};

#endif