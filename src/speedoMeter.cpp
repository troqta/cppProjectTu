#include <Gauge.cpp>;
#include <speedFactor.cpp>
#include <errCode.cpp>

class speedoMeter : public Gauge{
    private:
        speedFactor currentFactor;

    public:
        uint16_t convertVal(uint16_t val){
            if(currentFactor == 1){
                return val / 1.60934;
            }
            return val;
        }
        errCode setCurrentValue(uint16_t newValue){
            if(newValue > this.maxValue || newValue < this.minValue){
                return -1;
            }
            if(newValue == NULL){
                return 0;
            }
            if(newValue == this.maxValue){
                this.currentValue = newValue;
                return 2;
            }
            this.currentValue = newValue;
            return 5;
        }

        uint16_t getCurrentValue(){
            return convertVal(currentValue);
        }
        void display(){
            cout << "Current speed is" << getCurrentValue;
        }
        speedFactor getFactor(){
            return currentFactor;
        }
        errCode setCurrentFactor(speedFactor factor){
            if(factor != 0 && factor != 1){
                return -1;
            }
            if(factor == NULL){
                return 2;
            }
            this.currentFactor = factor;
            return 5;
        }
        speedoMeter(uint16_t min, uint16_t max, speedFactor currentFactor){
            this.minValue = min;
            this.maxValue = max;
            this.currentValue = min;
            this.currentFactor = 1; 
        }
};