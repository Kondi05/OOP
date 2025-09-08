#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
private:
    Appliance** appliances;
    int numAppliances;
    int capacity;
    int currentCount;

public:
    House();
    House(int numAppliances);
    ~House();
    
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
    
    // Additional helper methods
    int get_currentCount() const;
};

#endif