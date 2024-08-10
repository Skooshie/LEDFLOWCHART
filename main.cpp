#include "mbed.h"


// Setup Blue button and LED's
DigitalIn buttn(PC_13);
DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main()
{
    while (1) {

        // Logic of led control If button not pressed led1 is set high led2 is set low.
        if(buttn == 1){
            led1.write(1);
            led2.write(0);
        } else {
            led1 = 0;
            led2 = 1;
        }
    }
}

