#include <stdio.h>
#include <unistd.h>

void run(void) __attribute__((constructor));

/**
 * run - executes before main
 * Return: void
 */

void run(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
