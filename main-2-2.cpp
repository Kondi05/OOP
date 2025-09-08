#include <iostream>
#include "TV.h"

int main() {
    TV tv1;
    std::cout << "Default TV - Power Rating: " << tv1.get_powerRating() 
              << ", Screen Size: " << tv1.getScreenSize() << " inches" << std::endl;
    
    TV tv2(120, 55.0);
    std::cout << "TV 2 - Power Rating: " << tv2.get_powerRating() 
              << ", Screen Size: " << tv2.getScreenSize() << " inches" << std::endl;
    
    tv2.turnOn();
    std::cout << "Power Consumption: " << tv2.getPowerConsumption() << " watts" << std::endl;
    
    tv2.setScreenSize(65.0);
    std::cout << "After setting screen size to 65 inches - Power Consumption: " 
              << tv2.getPowerConsumption() << " watts" << std::endl;
    
    return 0;
}