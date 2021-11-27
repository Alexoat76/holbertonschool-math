#include "holberton.h"

/*
 * File: 6-multiplication.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * multiplication - performs the multiplication
 *            operation to complex numbers.
 * @c1: Struct type complex.
 * @c2: Struct type complex.
 * @c3: Pointer to complex result.
 * Return: N/A.
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	(*c3).re = (c1.re * c2.re) - (c1.im * c2.im);
	(*c3).im = (c1.re * c2.im) + (c1.im * c2.re);
}
