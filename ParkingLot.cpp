#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
    for (int i = 0; i < maxCapacity; i++) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < currentCount; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        delete vehicle;
        return;
    }
    vehicles[currentCount++] = vehicle;
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            // Shift remaining vehicles
            for (int j = i; j < currentCount - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            vehicles[currentCount - 1] = nullptr;
            currentCount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < currentCount; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}