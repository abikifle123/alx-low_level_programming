#include "main.h"

/**
 * print_alphabet - Here lies the function.
 *
 * Return: This is fun
 */
void print_alphabet(void)
{

char *output = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
_putchar(output[i]);
i++;
}

_putchar('\n');
}
