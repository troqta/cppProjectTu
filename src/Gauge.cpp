#include <cstdint>  
#include <errCode.cpp>

class Gauge{
    public:
    virtual void display();

    protected: 
        const uint16_t minValue;
        const uint16_t maxValue;

        uint16_t currentValue;

        


};