#include "mbed.h"
 
Ticker ticker;
DigitalOut led1(LED1);
DigitalOut led2(LED2);

CAN can2(p30, p29);
char counter = 0;

 
int main() {
    printf("main()\n");
    //ticker.attach(&send, 1);
    CANMessage msg;
    while(1) {
        printf("loop()\n");
        if(can2.read(msg)) {
            printf("Switch status received: %d\n", msg.data[0]);
            led2 = !led2;
        } 
        wait(0.2);
    }
}