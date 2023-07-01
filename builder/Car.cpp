#include "Car.h"
#include <iostream>

void Car::setSeatNumber(int seats) {
    this->seat_number = seats;
}

void Car::setEngineType(const std::string& engine) {
    this->engine = engine;
}

void Car::enableTripComputer() {
    this->tripComputer = true;
}

void Car::enableGPS() {
    this->GPS = true;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "Car features\n--------------------------\n";
    os << "Seat number: " << car.seat_number << std::endl;
    os << "Engine: " << car.engine << std::endl;
    os << "Trip computer: ";
    
    if(car.tripComputer) {
        os << "enabled\n";
    } else {
        os << "disabled\n";
    }
    
    os << "GPS: ";
    if(car.GPS) {
        os << "enabled\n";
    } else {
        os << "disabled\n";
    }

    return os;
}