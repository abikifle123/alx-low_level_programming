#include <stdio.h>
/* more headers goes there */

/**
 * main - Here goes nothing.
 *
 * Return: This is fun.
 */
int main(void)
{

char *alphabet = "0123456789abcdef";

int i = 0;

while (i < 16)
{
putchar(alphabet[i]);
i++;
}

putchar('\n');

return (0);
}
