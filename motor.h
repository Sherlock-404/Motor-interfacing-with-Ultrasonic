/******************************************************************************
 *
 * Module: MOTOR
 *
 * File Name: motor.h
 *
 * Description: Header file for the MOTOR driver
 *
 * Engineer: Youssef Taha
 *
 *******************************************************************************/
#ifndef MOTOR_H_
#define MOTOR_H_
#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"
/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define MOTOR_CTRL_PORT PORTC
#define MOTOR_CTRL_PORT_DIR DDRC
#define MOTOR_PINA PC0
#define MOTOR_PINB PC1
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void Motor_init(void);
void Motor_clockwise(void);
void Motor_AntiClockwise(void);
void Motor_stop(void);
#endif
