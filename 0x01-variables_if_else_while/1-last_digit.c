#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
 *
 * Return: 0 on success
*/

int main(void)
{
	int n;
	int digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%s %d is %d and is ", l, n, n % 10);

	if (digit > 5)
		printf("greater than 5\n");
	else if (digit < 6 && digit != 0)
		printf(" less than 6 and not 0\n");
	else if (digit == 0)
		printf("0\n");

	return (0);
}
