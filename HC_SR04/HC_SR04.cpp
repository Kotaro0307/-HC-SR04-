#include "HC_SR04.h"

HC_SR04::HC_SR04(PinName Trigger, PinName Echo) : _Trigger(Trigger), _Echo(Echo)
{
    raptor.attach(this, &HC_SR04::vtr, 0.06);
    _Echo.rise(this, &HC_SR04::RiseEcho);
    _Echo.fall(this, &HC_SR04::FallEcho);
}

void HC_SR04::vtr(void)
{
    _Trigger = 1;
    wait_us(10);
    _Trigger = 0;
}

void HC_SR04::RiseEcho(void)
{
    oclockR.start();
}

void HC_SR04::FallEcho(void)
{
    int usa;
    
    oclockR.stop();
    usa = oclockR.read_us();
    oclockR.reset();
    
    Distance = usa * 0.0170;
}

double HC_SR04::Get_Distance(void)
{
    return (Distance);
}