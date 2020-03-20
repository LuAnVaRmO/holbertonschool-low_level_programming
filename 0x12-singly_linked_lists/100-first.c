#include "lists.h"
/**
  * greet - greetings before main
  * Description: print before main
  * Return: void
  */
void  __attribute__((constructor)) greet()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
