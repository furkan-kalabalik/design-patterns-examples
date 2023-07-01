#include "CarManualBuilder.h"

Builder& CarManualBuilder::setSeats(int seats) {
    car_manual.setSeatNumber(seats);
    return *this;
}
Builder& CarManualBuilder::setEngine(const std::string& engine){
    car_manual.setEngineType(engine);
    return *this;
}
Builder& CarManualBuilder::setTripComputer(){
    car_manual.enableTripComputer();
    return *this;
}
Builder& CarManualBuilder::setGPS(){
    car_manual.enableGPS();
    return *this;
}
CarManual CarManualBuilder::build(){
    return car_manual;
}

void CarManualBuilder::reset(){
    car_manual = CarManual{};
}