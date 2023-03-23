#include "main.h"
/**
 * main - Test functions that print if integer is positive or nagetive 
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
