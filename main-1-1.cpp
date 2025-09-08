#include <iostream>
#include "Appliance.h"

int main() {
    // Test default constructor
    Appliance appliance1;
    std::cout << "Default appliance - Power Rating: " << appliance1.getPowerRating() 
              << ", Is On: " << appliance1.getIsOn() << std::endl;
    
    // Test parameterized constructor
    Appliance appliance2(1500);
    std::cout << "Appliance 2 - Power Rating: " << appliance2.getPowerRating() 
              << ", Is On: " << appliance2.getIsOn() << std::endl;
    
    // Test turnOn/turnOff methods
    appliance2.turnOn();
    std::cout << "After turning on - Is On: " << appliance2.getIsOn() << std::endl;
    
    appliance2.turnOff();
    std::cout << "After turning off - Is On: " << appliance2.getIsOn() << std::endl;
    
    // Test getPowerConsumption
    std::cout << "Power Consumption: " << appliance2.getPowerConsumption() << " watts" << std::endl;
    
    return 0;
}