#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread>
#include <chrono>

int main() {
    ParkingLot lot(10);
    
    // Park 5 Cars
    for (int i = 1; i <= 5; i++) {
        lot.parkVehicle(new Car(i));
    }
    
    // Park 3 Buses
    for (int i = 6; i <= 8; i++) {
        lot.parkVehicle(new Bus(i));
    }
    
    // Park 2 Motorbikes
    for (int i = 9; i <= 10; i++) {
        lot.parkVehicle(new Motorbike(i));
    }

    // Wait for some time to simulate parking duration
    std::cout << "Waiting 20 seconds to simulate parking..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(20));

    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << "Number of vehicles that overstayed (more than 15 seconds): " 
              << overstayingCount << std::endl;

    return 0;
}