#include "main.h"
int check_prime(int n, int i);
/**
* is_prime_number - returns prime number
*
*@n: number given
*
* Return: 1 if prime 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (check_prime(n, n / 2) > 0)
		return (1);
	return (0);
}
/**
* check_prime - checks prime number
*
* @n: number
* @i: iterator
*
* Return: if prime 1 if not 0
*/

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (check_prime(n, i - 1));
}
