#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Here lies the function.
 *@c: SERENITY IS NICE.
 *
 * Return: This is fun
 */
int _isalpha(int c)
{

int checker = isalpha(c);

if (checker == 0)
{
return (0);
}
else
{
return (1);
}

}
