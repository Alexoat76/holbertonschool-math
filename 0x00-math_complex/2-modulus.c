#include "holberton.h"

/*
 * File: 2-modulus.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * modulus - returns the modulus
 *           of a given complex number.
 * @c: structure complex
 * Return: c
 */

double modulus(complex c)
{
	double modulus = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (modulus);
}
