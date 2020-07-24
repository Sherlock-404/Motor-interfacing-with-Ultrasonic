/******************************************************************************
 *
 * Module: MOTOR
 *
 * File Name: motor.c
 *
 * Description: Source file for the MOTOR driver
 *
 * Engineer: Youssef Taha
 *
 *******************************************************************************/

#include "motor.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/
/*
/* Description : Function to initialize the Motor
/* 1.set the first pin to output pin  
/* 2.set the second pin to output pin
/* 3.clear the first pin to stop the motor
/* 4.clear the second pin to stop the motor
*/
void Motor_init(void)
{
    SET_BIT(MOTOR_CTRL_PORT_DIR, MOTOR_PINA);
    SET_BIT(MOTOR_CTRL_PORT_DIR, MOTOR_PINB);
    CLEAR_BIT(MOTOR_CTRL_PORT, MOTOR_PINA);
    CLEAR_BIT(MOTOR_CTRL_PORT, MOTOR_PINB);
}
/*******************************************************************************/
/*
/* Description : Function to start the Motor clockwise
/* 1.clear the first pin 
/* 2.set the second pin 
*/
void Motor_clockwise(void)
{
    CLEAR_BIT(MOTOR_CTRL_PORT, MOTOR_PINA);
    SET_BIT(MOTOR_CTRL_PORT, MOTOR_PINB);
}
/*******************************************************************************/
/*
/* Description : Function to start the Motor anti clockwise
/* 1.set the first pin 
/* 2.clear the second pin 
*/
void Motor_AntiClockwise(void)
{
    SET_BIT(MOTOR_CTRL_PORT, MOTOR_PINA);
    CLEAR_BIT(MOTOR_CTRL_PORT, MOTOR_PINB);
}
/*******************************************************************************/
/*
/* Description : Function to stop the Motor
/* 1.clear the first pin to stop the motor
/* 2.clear the second pin to stop the motor
*/
void Motor_stop(void)
{
    CLEAR_BIT(MOTOR_CTRL_PORT, MOTOR_PINA);
    CLEAR_BIT(MOTOR_CTRL_PORT, MOTOR_PINB);
}