#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>

/**
* @brief точка входа в програму
* @param x значение минимальной велечины пераметра x
* @param dx значение шага
* @param xk значение максимальной велечины пераметра xk
* @param a значение пераметра a
* @param b значение пераметра b
* @param с значение пераметра с
* @return 0 в случве успеха
*/

double tabulation(double x, double dx, double xk);
double derivative();

int main()
{
	double x = 2, dx = 0.2, xk = 4;
	tabulation(x, dx, xk);
	derivative();
	return 0;
}

double tabulation(double x, double dx, double xk)
{
	double y;

	printf("x\ty\n");
	for (x;x < xk + 0.2;x = x + dx)
	{
		y = 3 * x - 4 * log(x) - 5;
		printf("%lf\t%lf\n", x, y);
	}
	return 0;

}

double derivative()
{
	double a = 143, b = 777;
	printf("\nc\tproiz\n");
	for (int c = 1; c <= 9; c++)
	{
		printf("%d\t%lf\n", c, a * b * (double)c);
	}
	return 0;
}