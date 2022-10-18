#include <string.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Here lies the function.
 *
 * Return: This is fun.
 */
int main(void)
{

char *output = "_putchar.c";
int i = 0;
while (i < 8)
{
_putchar(output[i]);
i++;
}

_putchar('\n');

return (0);
}
