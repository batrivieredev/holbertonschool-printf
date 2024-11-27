#include "main.h"

/**
 * _abs - absolute value
 * @n: Number
 * Return: int
 */

int _abs(int n)
{
if (n < 0)
{
n = n * -1;
return (n);
}
return (n);
}

/**
 * *_itoa - Modifies the data type from 'int' to 'char *'
 * @value: Number or value
 * @base: Base to convert
 * Return: char *
 */

char *_itoa(int value, int base)
{
char buffer[1024];
int n, i;

if (base < 2 || base > 32)
exit(1);

n = _abs(value);

i = 0;
while (n)
{
int r = n % base;

r = _abs(r);
if (r >= 10)
buffer[i] = 65 + (r - 10);
else
buffer[i] = 48 + r;
i++;
n = n / base;
}

if (i == 0)
{
buffer[i] = '0';
i++;
}

if (value < 0 && base == 10)
{
buffer[i] = '-';
i++;
}

buffer[i] = '\0';

return (_reverse(buffer, i));
}

/**
 * *_utoa - Modifies the data type from 'unsigned' to 'char *'
 * @value: Number or value
 * @base: Base to convert
 * Return: char *
 */

char *_utoa(unsigned int value, unsigned int base)
{
char buffer[1024];
unsigned int i, r;

if (base < 2 || base > 32)
exit(1);

i = 0;
while (value)
{
r = value % base;

if (r >= 10)
buffer[i] = 65 + (r - 10);
else
buffer[i] = 48 + r;

i++;
value = value / base;
}

if (i == 0)
{
buffer[i] = '0';
i++;
}

buffer[i] = '\0';

return (_reverse(buffer, i));
}

/**
 * *_lcutoa - Modifies type from 'unsigned' to 'char *' with lower case
 * @value: Number or value
 * @base: Base to convert
 * Return: char *
 */

char *_lcutoa(unsigned int value, unsigned int base)
{
char buffer[1024];
unsigned int i, r;

if (base < 2 || base > 32)
exit(1);

i = 0;
while (value)
{
r = value % base;

if (r >= 10)
{
buffer[i] = 65 + (r - 10);
if (buffer[i] >= 65 && buffer[i] <= 90)
buffer[i] += 32;
}
else
buffer[i] = 48 + r;

i++;
value = value / base;
}

if (i == 0)
{
buffer[i] = '0';
i++;
}

buffer[i] = '\0';

return (_reverse(buffer, i));
}

/*
Les fonctions font des conversions d'entiers (signés ou non) en chaînes de
caractères dans des bases numériques données (de 2 à 32).
La fonction _abs calcule la valeur absolue d'un entier.
La fonction _itoa convertit un entier signé en chaîne de caractères.
La fonction _utoa convertit un entier non signé en chaîne de caractères.
La fonction _lcutoa est similaire à _utoa, mais elle utilise des lettres
minuscules pour les chiffres au-delà de 9 (c'est-à-dire pour les lettres
a-z dans les bases supérieures à 10).

*/
