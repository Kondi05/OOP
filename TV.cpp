#include "TV.h"

TV::TV() : Appliance(), screenSize(0.0) {}

TV::TV(int powerRating, double screenSize) 
    : Appliance(powerRating), screenSize(screenSize) {}

double TV::getScreenSize() const {  
    return screenSize;
}

void TV::setScreenSize(double size) {  
    screenSize = size;
}

double TV::getPowerConsumption() {
    return get_powerRating() * (screenSize / 10.0);
}