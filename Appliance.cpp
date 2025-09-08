#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOnStatus(false) {}

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOnStatus(false) {}

Appliance::~Appliance() {}  // Virtual destructor implementation

int Appliance::getPowerRating() const {
    return powerRating;
}

void Appliance::setPowerRating(int rating) {
    powerRating = rating;
}

bool Appliance::get_isOn() const {  
    return isOnStatus;
}

void Appliance::set_isOn(bool on) {  
    isOnStatus = on;
}

void Appliance::turnOn() {
    isOnStatus = true;
}

void Appliance::turnOff() {
    isOnStatus = false;
}

double Appliance::getPowerConsumption() {
    return 0.0;
}