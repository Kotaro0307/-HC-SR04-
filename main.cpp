#include "mbed.h"
#include "HC_SR04.h"


int main() {
    //超音波センサの宣言
    HC_SR04 TR(PA_9, PC_7);
    Serial pc(USBTX, USBRX);
    
    while(1) {
        //距離が出た！
        pc.printf("Distance : %.2lf\n\r", TR.Get_Distance());
    }
}
