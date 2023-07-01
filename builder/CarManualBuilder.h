#ifndef CAR_MANUAL_BUILDER_H
#define CAR_MANUAL_BUILDER_H

#include "Builder.h"
#include "CarManual.h"
class CarManualBuilder : public Builder {
public:
    Builder& setSeats(int seats);
    Builder& setEngine(const std::string& engine);
    Builder& setTripComputer();
    Builder& setGPS();
    CarManual build(); 
    void reset();
private:
    CarManual car_manual;
};

#endif