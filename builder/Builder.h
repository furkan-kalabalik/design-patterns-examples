#ifndef BUILDER_H
#define BUILDER_H

#include <string>

class Builder {
public:
    virtual Builder& setSeats(int seats) = 0;
    virtual Builder& setEngine(const std::string& engine) = 0;
    virtual Builder& setTripComputer() = 0;
    virtual Builder& setGPS() = 0;
    virtual void reset() = 0;
};

#endif