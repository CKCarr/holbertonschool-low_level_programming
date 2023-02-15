/**
* factorial - return factorial of a given number
*
*@n: number to be checked
*
* Return: Always 0. unless its a factorial and then 1
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
