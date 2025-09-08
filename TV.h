#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
private:
    double screenSize;

public:
    TV();
    TV(int powerRating, double screenSize);
    
    // Getters and setters
    double get_screenSize() const;
    void set_screenSize(double size);
    
    // Override virtual function
    double getPowerConsumption() override;
};

#endif