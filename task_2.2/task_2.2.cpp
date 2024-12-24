#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* @brief точка входа в програму
* @param x значение пераметра x
* @param y значение пераметра y
* @param a значение пераметра a
* @return 0 в случве успеха
*/

double input();
double output(double x, double a);

int main()
{
	double a = 2.5, x, y;
	x = input();
	printf("x = %lf\n", x);
	y = output(x, a);
	printf("y = %lf\n", y);
	return 0;
}

double input()
{
	double x;
	printf("input x.\n");
	scanf_s("%lf", &x);
	return x;
}

double output(double x, double a)
{
	double y;
	if (x > a)
	{
		y = x * pow(sin(x), 2);
	}
	else
	{
		y = x * pow(cos(x), 2);
	}
	return y;
}