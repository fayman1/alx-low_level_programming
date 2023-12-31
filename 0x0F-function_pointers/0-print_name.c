#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	while (name != 0 && f != 0)
	{
		f(name);
		break;
	}
}


