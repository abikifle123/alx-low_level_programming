#include "main.h"

/**
 * print_alphabet_x10 - Here lies the function.
 *
 * Return: This is fun
 */
void print_alphabet_x10(void)
{

char *output = "abcdefghijklmnopqrstuvwxyz";
int n = 0;
while (n < 10)
{
int i = 0;
while (i < 26)
{
_putchar(output[i]);
i++;
}
_putchar('\n');
n++;
}

}
