#include <Gauge.cpp>;
#include <speedFactor.cpp>
#include <errCode.cpp>

class speedoMeter : public Gauge{
    private:
        speedFactor currentFactor;

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
        speedFactor getFactor(){
            return currentFactor;
        }
        errCode setCurrentFactor(speedFactor factor){
            if(true){                           //some form of validation
                currentFactor = factor;
                return errCode.success;
            }
            else{
                if(true){                       //checks what error it should return...
                    return errcode.invalidVal;
                }
            }
        }
        speedoMeter(uint16_t min, uint16_t max, speedFactor currentFactor){
            this.minValue = min;
            this.maxValue = max;
            this.currentValue = 0;
            this.currentFactor = speedFactor.KMH; //should be getGlobalFactor();
        }
};