#include "hash_tables.h"
/**
 * hash_djb2 - a hash function
 * @str: an unsigned string to get the hash value
 * Return: A hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int c;

	hash_value = 5381;
	while ((c = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + c;
	}
	return (hash_value);
}
