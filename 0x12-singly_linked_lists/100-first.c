#include <stdio.h>

/**
 * emain - function that runs before main
 *
 * Return: nothing
 */

void __attribute__ ((constructor)) emain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

