#include <stdio.h>

/**
 * main- prints fiibonacci etc
 *
 * Return: 0 always
 */
int main(void)
{
	/* var declaration */
	unsigned long int x, y, ax1, ax2, ax3, ay1, ay2, ay3;
	int counter;

	/* code */
	x = 1;
	y = 2;
	ax1 = 1;
	ay1 = 0;
	ax2 = 0;
	ay2 = 1;
	printf("%llu", (ax1 * x + ay1 * y));
	printf(", ");
	printf("%llu", (ax2 * x + ay2 * y));
	counter = 2;
	while (counter < 99)
	{
		ax3 = ax1 + ax2;
		ay3 = ay1 + ay2;
		printf(", %llu", (ax3 * x + ay3 * y));
		counter++;
		ax1 = ax2;
		ay1 = ay2;
		ax2 = ax3;
		ay3 = ay3;
	}
	printf("\n");
	return (0);
}
