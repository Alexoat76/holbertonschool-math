#include "main_math.h"

/*
 * File: 0-display.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * display_complex_number - Display complex number
 *                          followed by a new line.
 * @complex: Complex number
 */

void display_complex_number(complex complex)
{
if (complex.real == 0)
{
if (complex.imaginary < 0)
printf("- %.9gi\n", complex.imaginary * (-1));
else if (complex.imaginary == 0)
printf("0\n");
else
printf("%.9gi\n", complex.imaginary);
}
else
{
if (complex.imaginary < -1)
printf("%.9g - %.9gi\n", complex.real, complex.imaginary * (-1));
else if (complex.imaginary == -1)
printf("%.9g - i\n", complex.real);
else if (complex.imaginary == 0)
printf("%.9g\n", complex.real);
else if (complex.imaginary == 1)
printf("%.9g + i\n", complex.real);
else
printf("%.9g + %.9gi\n", complex.real, complex.imaginary);
}
}
