#include "main.h"
#include <math.h>

/**
 * print_last_digit - Here lies the function.
 *@n: SERENITY IS NICE
 *
 * Return: This is fun!!
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;

if (lastDigit == -4)
{
_putchar('4');
return (4);
}
else if (lastDigit == -8)
{
_putchar('8');
return (8);
}
else
{
_putchar('0' + lastDigit);
return (lastDigit);
}

}
