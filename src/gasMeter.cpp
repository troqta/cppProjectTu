#include <Gauge.cpp>;
#include <errCode.cpp>

class gasMeter : public Gauge{
    public:
        uint16_t convertVal(uint16_t val){
            
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
            return currentValue;
        }
        void display(){
            cout << "Current gas value is" << getCurrentValue;
        }
        gasMeter(uint16_t min, uint16_t max){
            this.minValue = min;
            this.maxValue = max;
            this.currentValue = min;
        }
}