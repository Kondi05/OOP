#include "Fridge.h"

Fridge::Fridge() : Appliance(), volume(0.0) {}

Fridge::Fridge(int powerRating, double volume) 
    : Appliance(powerRating), volume(volume) {}

double Fridge::get_volume() const {
    return volume;
}

void Fridge::set_volume(double vol) {
    volume = vol;
}

double Fridge::getPowerConsumption() {
    return get_powerRating() * 24 * (volume / 100.0);
}