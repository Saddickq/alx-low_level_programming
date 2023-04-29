#include <stdlib.h>
#include <string.h>
#include "main.h"

int count_words(char *str);
int word_length(char *str);
char **free_memory(char **words, int i);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings,
 * or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;


	if (str == NULL || *str == '\0')
		return (NULL);

	n = count_words(str);
	if (n == 0)
		return (NULL);


	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);


	for (i = 0, j = 0; i < n; i++)
	{
		while (*str == ' ')
			str++;
		k = word_length(str);
		words[i] = malloc((k + 1) * sizeof(char));
		if (words[i] == NULL)
			return (free_memory(words, i));
		for (k = 0; str[k] != ' ' && str[k] != '\0'; k++)
			words[i][k] = str[k];
		words[i][k] = '\0';
		str += k;
	}
	words[n] = NULL;
	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count
 *
 * Return: the number of words in str
 */
int count_words(char *str)
{
	int n = 0, i = 0;


	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
			n++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	return (n);
}

/**
 * word_length - gets the length of the next word in a string
 * @str: the string to check
 *
 * Return: the length of the next word in str
 */
int word_length(char *str)
{
	int i = 0;

	while (str[i] != ' ' && str[i] != '\0')
		i++;
	return (i);
}

/**
 * free_memory - frees memory allocated for an array of strings
 * @words: the array of strings to free
 * @i: the index of the last valid element in words
 *
 * Return: always NULL
 */
char **free_memory(char **words, int i)
{
	while (i >= 0)
	{
		free(words[i]);
		i--;
	}
	free(words);
	return (NULL);
}
