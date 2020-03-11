#include "3-calc.h"
/**
 * main - Entry point
 * @argc: integer number of arguments
 * @argv: array of pointers
 * Description: print the number of argumens from the function
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int calc = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2])(num1, num2);
	printf("%d\n", calc);
	return (0);
}
