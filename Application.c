/******************************************************************************
 *
 * File Name: Application.c
 *
 * Description: Source file for the Application layer 
 *
 * Engineer: Youssef Taha
 *
 *******************************************************************************/

#include "ultrasonic.h"
#include "motor.h"

int main()
{
    uint16 distance = 0;
    /* 1.Initialize The Ulrtasonic*/
    Ultrasonic_init();
    /*Initizlize The Motor*/
    Motor_init();
    /* Enable Global Interrupt I-Bit */
    SET_BIT(SREG, 7);

    while (1)
    {
        /*get the Distance from ultrasonic*/
        distance = Ultrasonic_getLength();
        /* If the Distance Less than 50% of the Range the Motor will start in Clockwise Direction*/
        /* Else the Motor will start in Anticlockwise direction*/
        if (distance <= Ultrasonic_range / 2)
        {
            Motor_clockwise();
        }
        else
        {
            Motor_AntiClockwise();
        }
        /*delay 10us between evert pulse*/
        _delay_us(10);
    }
}
