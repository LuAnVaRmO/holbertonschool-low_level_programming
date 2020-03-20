#include "lists.h"
/**
  * before_main - prints before main
  *
  * Return: void
  */
void  __attribute__((constructor)) greet()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
