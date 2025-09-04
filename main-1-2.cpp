#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);
    
    while (lot.getCount() < 10) {
        int type, id;
        std::cout << "Enter vehicle type (1=Car, 2=Bus, 3=Motorbike) and ID to park: ";
        std::cin >> type >> id;
        
        Vehicle* vehicle = nullptr;
        switch (type) {
            case 1:
                vehicle = new Car(id);
                break;
            case 2:
                vehicle = new Bus(id);
                break;
            case 3:
                vehicle = new Motorbike(id);
                break;
            default:
                std::cout << "Invalid type" << std::endl;
                continue;
        }
        
        lot.parkVehicle(vehicle);
        std::cout << "Current vehicles in lot: " << lot.getCount() << std::endl;
    }

    int unparkID;
    std::cout << "Enter vehicle ID to unpark: ";
    std::cin >> unparkID;
    lot.unparkVehicle(unparkID);

    return 0;
}