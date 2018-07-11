#include <cstdint>  
#include <errCode.cpp>

class Gauge{
    public:
    virtual uint16_t getCurrentValue();
    virtual errCode setCurrentValue(uint16_t currentValue);

    protected: 
        const uint16_t minValue;
        const uint16_t maxValue;

        uint16_t currentValue;

        void display();


};