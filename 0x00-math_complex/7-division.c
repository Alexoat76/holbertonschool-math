#include "holberton.h"

/*
 * File: 7-division.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * division - performs the division.c
 *            operation to complex numbers.
 * @c1: Struct type complex.
 * @c2: Struct type complex.
 * @c3: Pointer to complex result.
 * Return: N/A.
 */

void division(complex c1, complex c2, complex *c3)
{
		double a = c1.re;
		double b = c1.im;
		double c = c2.re;
		double d = c2.im;

		(*c3).re = ((a * c) + (b * d)) / ((c * c) + (d * d));
		(*c3).im = ((b * c) - (a * d)) / ((c * c) + (d * d));

}
