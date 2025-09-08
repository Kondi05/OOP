#include <iostream>
#include "TV.h"

int main() {
    // Test default constructor
    TV tv1;
    std::cout << "Default TV - Power Rating: " << tv1.getPowerRating() 
              << ", Screen Size: " << tv1.getScreenSize() << " inches" << std::endl;
    
    // Test parameterized constructor
    TV tv2(120, 55.0);
    std::cout << "TV 2 - Power Rating: " << tv2.getPowerRating() 
              << ", Screen Size: " << tv2.getScreenSize() << " inches" << std::endl;
    
    // Test power consumption calculation
    tv2.turnOn();
    std::cout << "Power Consumption: " << tv2.getPowerConsumption() << " watts" << std::endl;
    
    // Test setter
    tv2.setScreenSize(65.0);
    std::cout << "After setting screen size to 65 inches - Power Consumption: " 
              << tv2.getPowerConsumption() << " watts" << std::endl;
    
    return 0;
}