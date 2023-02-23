#include "main.h"

int _isupper(int c)
{
	char letter;
	if ((letter >= 'A') && (letter <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
