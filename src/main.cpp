#include <iostream>
#include <stdin.h>
#include <vector>
#include<Gauge.cpp>
#include <chrono>
#include <thread>
using namespace std;


vector<Gauge> gauges;

int main()
{
    using namespace std::this_thread; 
    using namespace std::chrono; 
    
    Gauge speed = new speedoMeter(0, 300, speedFactor.KMH);
    Gauge odo = new OdoMeter(0, 300000);
    Gauge temp = new tempMeter(0, 400, 1);
    Gauge gas = new gasMeter(0, 100);

    gauges.emplace_back(speed);
    gauges.emplace_back(odo);
    gauges.emplace_back(temp);
    gauges.emplace_back();
    int number = 0;
    while(0){

        sleep_for(nanoseconds(80));
        
        for(Gauge = g in gauges)
        {
           g.setCurrentValue(number);
        }
        sleep_for(nanoseconds(10))
        
        for(Gauge = g in gauges)
        {
            g.display();
        }
        
        number++;
    }
    return 0;
}