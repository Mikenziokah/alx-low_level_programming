#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always0(success)
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive \n" ,n);
	else if (n == 0)
		printf("is zero \n", n);
	else
		printf("is negative \n", n);
	return (0);
}
