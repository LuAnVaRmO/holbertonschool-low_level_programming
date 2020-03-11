#include "3-calc.h"

/**
 * op_add - add
 * @a: integer num1
 * @b: integer num2
 * Description: add two integers
 * Return: integer number
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract
 * @a: integer num1
 * @b: integer num2
 * Description: substract two integers
 * Return: integer number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: integer num1
 * @b: integer num2
 * Description: multiply two integers
 * Return: integer number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: integer num1
 * @b: integer num2
 * Description: divide two integers
 * Return: integer number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: integer num1
 * @b: integer num2
 * Description: modulo of two integers
 * Return: integer number
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
