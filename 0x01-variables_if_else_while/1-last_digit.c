#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (lastNum > 5)
						printf("Last digit and is greater than 5\n", n, Lastnum);
					else if (lastNum == 0)
						printf("Last digit and is 0\n", n, Lastnum);
					else 
						printf("last digit and is less than 6 and not 0\n", n, Lastnum);
				return (0);
}
