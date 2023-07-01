#ifndef CAR_BUILDER_H
#define CAR_BUILDER_H

#include "Builder.h"
#include "Car.h"
class CarBuilder : public Builder {
public:
    Builder& setSeats(int seats);
    Builder& setEngine(const std::string& engine);
    Builder& setTripComputer();
    Builder& setGPS();
    Car build();
    void reset();   
private:
    Car car;
};

#endif