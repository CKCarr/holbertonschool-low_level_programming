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
	return(check_prime(n,1));
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
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (is_prime_number(n, i + 1));
}
