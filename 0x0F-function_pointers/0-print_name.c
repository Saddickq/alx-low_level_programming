#include "function_pointers"
/**
 * print_name - print a name
 * @name: string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}