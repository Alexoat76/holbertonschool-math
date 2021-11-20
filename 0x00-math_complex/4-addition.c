#include "holberton.h"

/*
 * File: 4-addition.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * addition - performs the addition
 *            operation to complex numbers.
 * @c1: Struct type complex.
 * @c2: Struct type complex.
 * @c3: Pointer to complex result.
 * Return: N/A.
 */

void addition(complex c1, complex c2, complex *c3)
{
	(*c3).re = c1.re + c2.re;
	(*c3).im = c1.im + c2.im;
}
