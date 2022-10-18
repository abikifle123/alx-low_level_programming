#include <ctype.h>
#include "main.h"

/**
 * _islower - Here lies the function.
 *@c: SERENITY IS NICE.
 *
 * Return: This is fun
 */
int _islower(int c)
{

int checker = islower(c);

if (checker == 0)
{
return (0);
}
else
{
return (1);
}

}
