#ifndef _MAIN_MATH_H_
#define _MAIN_MATH_H_

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <float.h>
#include <math.h>

/*
 * File: main_math.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 * Desc: Header file that defines a
 *       new type struct complex and uses the
 *       prototypes for directory Math Complex.
 */

/**
 * struct complex - Where a complex number a + ib
 * is represented by two doubles.
 * @real: real part of complex number.
 * @imaginary: imaginary part or complex number.
 */

typedef struct complex
{
double real;
double imaginary;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif
