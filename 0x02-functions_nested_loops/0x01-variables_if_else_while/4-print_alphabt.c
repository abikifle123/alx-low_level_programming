#include <stdio.h>
/* more headers goes there */

/**
 * main - Here goes nothing!
 *
 * Return: This is fun!
 */
int main(void)
{

char *alphabet = "abcdefghijklmnopqrstuvwxyz";

int i = 0;
while (i < 26)
{
if (alphabet[i] != 'q' && alphabet[i] != 'e')
putchar(alphabet[i]);
i++;
}

putchar('\n');

return (0);
}
