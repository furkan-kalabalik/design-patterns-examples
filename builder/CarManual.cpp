#include "CarManual.h"

void CarManual::setSeatNumber(int seats) {
    this->seat_number = seats;
}

void CarManual::setEngineType(const std::string& engine) {
    this->engine = engine;
}

void CarManual::enableTripComputer() {
    this->tripComputer = true;
}

void CarManual::enableGPS() {
    this->GPS = true;
}

std::ostream& operator<<(std::ostream& os, const CarManual& car_manual) {
    os << "Car Manual includes\n--------------------------\n";
    os << "Seat number: " << car_manual.seat_number << std::endl;
    os << "Engine: " << car_manual.engine << std::endl;
    os << "Trip computer: ";
    
    if(car_manual.tripComputer) {
        os << "enabled\n";
    } else {
        os << "disabled\n";
    }
    
    os << "GPS: ";
    if(car_manual.GPS) {
        os << "enabled\n";
    } else {
        os << "disabled\n";
    }

    return os;
}