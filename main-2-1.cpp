#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge1;
    std::cout << "Default fridge - Power Rating: " << fridge1.get_powerRating() 
              << ", Volume: " << fridge1.getVolume() << "L" << std::endl;
    
    Fridge fridge2(200, 350.5);
    std::cout << "Fridge 2 - Power Rating: " << fridge2.get_powerRating() 
              << ", Volume: " << fridge2.getVolume() << "L" << std::endl;
    
    fridge2.turnOn();
    std::cout << "Power Consumption: " << fridge2.getPowerConsumption() << " watts" << std::endl;
    
    fridge2.setVolume(400.0);
    std::cout << "After setting volume to 400L - Power Consumption: " 
              << fridge2.getPowerConsumption() << " watts" << std::endl;
    
    return 0;
}