#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
private:
    int powerRating;
    bool isOnStatus;  

public:
    Appliance();
    Appliance(int powerRating);
    virtual ~Appliance();  
    
    
    int getPowerRating() const;
    void setPowerRating(int rating);
    bool get_isOn() const;  
    void set_isOn(bool on);
    
    
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif