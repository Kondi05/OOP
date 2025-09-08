#include "House.h"
#include <iostream>

House::House() : appliances(nullptr), numAppliances(0), capacity(0), currentCount(0) {}

House::House(int numAppliances) 
    : numAppliances(numAppliances), capacity(numAppliances), currentCount(0) {
    appliances = new Appliance*[numAppliances];
    for (int i = 0; i < numAppliances; i++) {
        appliances[i] = nullptr;
    }
}

House::~House() {
    for (int i = 0; i < currentCount; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (currentCount < capacity) {
        appliances[currentCount] = appliance;
        currentCount++;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() {
    double total = 0.0;
    for (int i = 0; i < currentCount; i++) {
        if (appliances[i] != nullptr) {
            total += appliances[i]->getPowerConsumption();
        }
    }
    return total;
}

int House::get_currentCount() const {
    return currentCount;
}