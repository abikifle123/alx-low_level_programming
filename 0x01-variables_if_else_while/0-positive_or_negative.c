#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Here is the function.
 *
 * Return: This is fun!
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d", n);

if (n == 0)
printf(" is zero\n");
else if (n < 0)
printf(" is negative\n");
else if (n > 0)
printf(" is positive\n");


return (0);
}
