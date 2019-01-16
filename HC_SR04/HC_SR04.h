#ifndef HC_SR04_H
#define HC_SR04_H

#include "mbed.h"

class HC_SR04
{
    private:
        DigitalOut _Trigger;
        InterruptIn _Echo;
        Ticker raptor;
        Timer oclockR;
        double Distance;
            
    public:
        //ピンセット
        HC_SR04(PinName Trigger, PinName Echo);
        void vtr(void);
        void FallEcho(void);
        void RiseEcho(void);
        double Get_Distance(void);
};

#endif