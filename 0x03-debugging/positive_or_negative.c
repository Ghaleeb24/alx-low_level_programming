#include "main.h"
/**
 * positive_or_negative - Test function that prints if it positive or nagative
 *
 * @i: The number to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negetive\n", i);
	else
		printf("%d is positive\n", i);
}
