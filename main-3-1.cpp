#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    House house(3);
    
    Fridge* fridge = new Fridge(200, 350.0);
    TV* tv = new TV(120, 55.0);
    Fridge* smallFridge = new Fridge(150, 200.0);
    
    fridge->turnOn();
    tv->turnOn();
    smallFridge->turnOn();
    
    std::cout << "Adding fridge: " << (house.addAppliance(fridge) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding TV: " << (house.addAppliance(tv) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding small fridge: " << (house.addAppliance(smallFridge) ? "Success" : "Failed") << std::endl;
    
    TV* extraTV = new TV(100, 42.0);
    std::cout << "Adding extra TV: " << (house.addAppliance(extraTV) ? "Success" : "Failed") << std::endl;
    delete extraTV;
    
    std::cout << "Total power consumption: " << house.getTotalPowerConsumption() << " watts" << std::endl;
    
    return 0;
}