#include <stdio.h>
/* more headers goes there */

/**
 * main - Beautiiufl night!
 *
 * Return: here goes nothing.
 */
int main(void)
{

char *alphabet = "abcdefghijklmnopqrstuvwxyz";

int i = 0;
while (i < 26)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');

return (0);
}
