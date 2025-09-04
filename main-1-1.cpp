#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numVehicles;
    std::cout << "Enter number of vehicles: ";
    std::cin >> numVehicles;

    Vehicle** vehicles = new Vehicle*[numVehicles];
    
    for (int i = 0; i < numVehicles; i++) {
        int type, id;
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike) and ID for vehicle " << i + 1 << ": ";
        std::cin >> type >> id;
        
        switch (type) {
            case 1:
                vehicles[i] = new Car(id);
                break;
            case 2:
                vehicles[i] = new Bus(id);
                break;
            case 3:
                vehicles[i] = new Motorbike(id);
                break;
            default:
                std::cout << "Invalid type, using Car as default" << std::endl;
                vehicles[i] = new Car(id);
                break;
        }
    }

    // Wait a moment to see duration differences
    std::cout << "Calculating parking durations..." << std::endl;
    
    for (int i = 0; i < numVehicles; i++) {
        std::cout << "Vehicle ID " << vehicles[i]->getID() 
                  << ": Parking duration = " << vehicles[i]->getParkingDuration() 
                  << " seconds" << std::endl;
    }

    // Cleanup
    for (int i = 0; i < numVehicles; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}