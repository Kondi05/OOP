#include <iostream>
#include "Appliance.h"

int main() {
    Appliance appliance1;
    std::cout << "Default appliance - Power Rating: " << appliance1.get_powerRating() 
              << ", Is On: " << appliance1.get_isOn() << std::endl;
    
    Appliance appliance2(1500);
    std::cout << "Appliance 2 - Power Rating: " << appliance2.get_powerRating() 
              << ", Is On: " << appliance2.get_isOn() << std::endl;
    
    appliance2.turnOn();
    std::cout << "After turning on - Is On: " << appliance2.get_isOn() << std::endl;
    
    appliance2.turnOff();
    std::cout << "After turning off - Is On: " << appliance2.get_isOn() << std::endl;
    
    std::cout << "Power Consumption: " << appliance2.getPowerConsumption() << " watts" << std::endl;
    
    return 0;
}