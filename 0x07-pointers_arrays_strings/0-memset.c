/*
 * File: 0-memset.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b.
 * @s: The memory area to be filled.
 * @b: The character to fill the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
