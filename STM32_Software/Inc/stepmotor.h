#ifndef __STEPMOTOR_H
#define __STEPMOTOR_H

#include "gpio.h"
#include "stm32f4xx_hal.h"

#define ON 	GPIO_PIN_SET
#define OFF GPIO_PIN_RESET

void X_Motor_OneStep_CW(void);
void X_Motor_OneStep_CCW(void);
void Y_Motor_OneStep_CW(void);
void Y_Motor_OneStep_CCW(void);
int X_Step_Calculate(int x_pos);
int Y_Step_Calculate(int y_pos);
int Block_Move_Target(int x_pos, int y_pos);

#endif