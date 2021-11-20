#include "holberton.h"

/*
 * File: 1-conjugate.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * conjugate - return the conjugate
 * @c: structure complex
 * Return: complex
 */

complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
