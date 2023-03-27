#include "main.h"

/**
 * _strlen - returns the string length
 *@s: string whose length to be printed
 Return: length of the string
 */
int _strlen(char *s);
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;

	}

	return (longi);
}
