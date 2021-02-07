#include "mbed.h"
 
Ticker ticker;
DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalIn get_switch_status(p20);

CAN can1(p30, p29);
char counter = 0;
 
void send() {
    printf("send()\n");
    if(can1.write(CANMessage(1337, &counter, 1))) {
        printf("wloop()\n");
        //counter++;
        printf("Switch status sent: %d\n", counter);
    } 
    led1 = !led1;
}
 
int main() {
    printf("main()\n");
    ticker.attach(&send, 1);
    CANMessage msg;
    while(1) {
        printf("loop()\n");
        counter=get_switch_status;
        wait(0.2);
    }
}