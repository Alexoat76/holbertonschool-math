#include "holberton.h"

/*
 * File: 8-complex.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * complex_from_mod_arg - update the real and the imaginary parts of
 *                        a complex number given its modulus and arguments.
 * @m: Struct type complex.
 * @arg: Struct type complex.
 * @c3: Pointer to complex result.
 * Return: N/c1.
 */
void complex_from_mod_arg (double m, double arg, complex *c3)
{
	double x, y;
	x = cos(arg);
	y = sin(arg);

	(*c3).re = x * m;
	(*c3).im = y * m;

}
