#include "function_pointers.h"

/**
 * print_name - funtion to print name with call back
 * @name: input name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
