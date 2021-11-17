#include "holberton.h"

/*
 * File: 0-display.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * display_complex_number - Display complex number
 *                          followed by a new line.
 * @c: Complex number
 */

void display_complex_number(complex c)
{
	if (c.re == 0)
	{
		if (c.im < 0)
			printf("- %.9gi\n", c.im * (-1));
		else if (c.im == 0)
			printf("0\n");
		else
			printf("%.9gi\n", c.im);
	}
	else
	{
		if (c.ima < -1)
			printf("%.9g - %.9gi\n", c.re, c.im * (-1));
		else if (c.im == -1)
			printf("%.9g - i\n", c.re);
		else if (c.im == 0)
			printf("%.9g\n", c.re);
		else if (c.im == 1)
			printf("%.9g + i\n", c.re);
		else
			printf("%.9g + %.9gi\n", c.re, c.im);
	}
}

