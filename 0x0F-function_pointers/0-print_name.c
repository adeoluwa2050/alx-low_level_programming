#include "function_pointers.h"

/**
 * print_name - name to be printed
 * @name: name to be printed
 * @f: a pointer to the function that print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
