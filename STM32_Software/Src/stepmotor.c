#include "stepmotor.h"

void X_Motor_OneStep_CW(void) // X_CW
{

	HAL_GPIO_WritePin(XSTEP_GPIO_Port, XSTEP_Pin, ON);
	HAL_Delay(1);
	HAL_GPIO_WritePin(XSTEP_GPIO_Port, XSTEP_Pin, OFF);
	HAL_Delay(1);
}

void X_Motor_OneStep_CCW(void) // X_CCW
{
	HAL_GPIO_WritePin(XSTEP_GPIO_Port, XSTEP_Pin, ON);
	HAL_GPIO_WritePin(XSTEP_GPIO_Port, XSTEP_Pin, OFF);
}

void Y_Motor_OneStep_CW(void) // Y_CW
{
	HAL_GPIO_WritePin(YSTEP_GPIO_Port, YSTEP_Pin, ON);
	HAL_GPIO_WritePin(YSTEP_GPIO_Port, YSTEP_Pin, OFF);
}

void Y_Motor_OneStep_CCW(void) // Y_CCW
{
	HAL_GPIO_WritePin(YSTEP_GPIO_Port, YSTEP_Pin, ON);
	HAL_GPIO_WritePin(YSTEP_GPIO_Port, YSTEP_Pin, OFF);
}

int X_Step_Calculate(int x_pos)
{
	int gone_steps = 0;
	int xsteps = 0;
	xsteps = 0.5 * (x_pos);
	return xsteps;
}

int Y_Step_Calculate(int y_pos)
{
	int gone_steps = 0;
	int ysteps = 0;
	ysteps = 0.5 * y_pos;
	return ysteps;
}

void Block_Move_Target(int x_pos, int y_pos)
{
	int xsteps, ysteps = 0;
	xsteps = X_Step_Calculate(x_pos);
	ysteps = Y_Step_Calculate(y_pos);
	for (int i = 0; i <= xsteps; i++)
	{
		X_Motor_OneStep_CW();
	}
	for (int i = 0; i <= ysteps; i++)
	{
		Y_Motor_OneStep_CW();
	}
}

void Block_Move_Back(int x_pos, int y_pos)
{
	int xsteps,ysteps = 0;
	
}

