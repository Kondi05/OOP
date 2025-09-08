#include "TV.h"

TV::TV() : Appliance(), screenSize(0.0) {}

TV::TV(int powerRating, double screenSize) 
    : Appliance(powerRating), screenSize(screenSize) {}

double TV::get_screenSize() const {
    return screenSize;
}

void TV::set_screenSize(double size) {
    screenSize = size;
}

double TV::getPowerConsumption() {
    return get_powerRating() * (screenSize / 10.0);
}