#include "holberton.h"

/*
 * File: 3-argument.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * argument - returns the argument
 *            of a given complex number.
 * @c: Struct type complex
 * Return: argument of number complex.
 */

double argument(complex c)
{
	double argument;

	argument = atan((c.im / c.re));
	return (argument);

}
