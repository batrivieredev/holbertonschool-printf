#include "main.h"

/**
 * _assign - assing and count function
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int _assign(char *buff, int count, char *value)
{
int i = 0;

while (value[i])
{
buff[i] = value[i];
count++;
i++;
}
return (count);
}

/**
 * _rev_assign - reversed assing function and return count
 * @buff: str var
 * @count: index counter
 * @value: value in the index
 * Return: int
 */

int _rev_assign(char *buff, int count, char *value)
{
int len = _strlen(value);
int i;

for (i = 0; i <= len; i++)
{
buff[i] = value[len - i];
count++;
}
return (count);
}


/*
_assign : Cette fonction copie la chaîne source telle quelle dans buff et
incrémente le compteur count pour chaque caractère copié.


_rev_assign : Cette fonction copie la chaîne source dans buff mais dans
l'ordre inverse et incrémente également le compteur count pour chaque
caractère copié.

*/
