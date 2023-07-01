#include "CarBuilder.h"

Builder& CarBuilder::setSeats(int seats) {
    car.setSeatNumber(seats);
    return *this;
}
Builder& CarBuilder::setEngine(const std::string& engine){
    car.setEngineType(engine);
    return *this;
}
Builder& CarBuilder::setTripComputer(){
    car.enableTripComputer();
    return *this;
}
Builder& CarBuilder::setGPS(){
    car.enableGPS();
    return *this;
}
Car CarBuilder::build(){
    return car;
}

void CarBuilder::reset(){
    car = Car{};
}