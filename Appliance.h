class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);
    
    
    int getPowerRating() const;  
    void setPowerRating(int rating);  
    bool isOn() const;  
    void setIsOn(bool on);  
    
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};