#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
private:
    double volume;

public:
    Fridge();
    Fridge(int powerRating, double volume);
    
    // Getters and setters
    double get_volume() const;
    void set_volume(double vol);
    
    // Override virtual function
    double getPowerConsumption() override;
};

#endif