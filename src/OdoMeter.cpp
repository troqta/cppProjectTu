#include <Gauge.cpp>;
#include <errCode.cpp>

class OdoMeter : public Gauge{
    public:
        uint16_t convertVal(uint16_t val){
            //do some converts
            return val;
        }
        errCode setCurrentValue(uint16_t newValue){
            if(true){                           //some form of validation
                currentValue = newValue;
                return errCode.success;
            }
            else{
                if(true){                       //checks what error it should return...
                    return errcode.invalidVal;
                }
            }
        }

        uint16_t getCurrentValue(){
            return convertVal(currentValue);
        }
        void display(){
            //display stuff
        }
        speedoMeter(uint16_t min, uint16_t max){
            this.minValue = min;
            this.maxValue = max;
            this.currentValue = 0;
        }
}