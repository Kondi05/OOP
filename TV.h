#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
private:
    double screenSize;

public:
    TV();
    TV(int powerRating, double screenSize);
    
    
    double getScreenSize() const;
    void setScreenSize(double size);
    
    
    double getPowerConsumption() override;
};

#endif