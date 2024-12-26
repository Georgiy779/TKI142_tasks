#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>

/**
* @brief Ввод значений переменных
* @param x значение вводимой переменной
* @return значение x
*/
double input();

/**
* @brief табулированние параметра x
* @param x значение минимальной велечины пераметра x
* @return табулированного значения x
*/
double tabulation(double x);

/**
* @brief точка входа в програму
* @param x значение минимальной велечины пераметра x
* @param dx значение шага
* @param xk значение максимальной велечины пераметра xk
* @return 0 в случве успеха
*/
int main()
{
	double x, dx, xk, tabulation_meaning;
	printf("input minimum value x\n");
	x = input();
	printf("input maximum value x\n");
	xk = input();
	printf("input dx\n");
	dx = input();
	printf("x\ty\n");
	for (x;x < xk + dx;x = x + dx)
	{
		tabulation_meaning = tabulation(x);
		printf("%lf\t%lf\n", x, tabulation_meaning);
	}
	return 0;
}

double tabulation(double x)
{
	return 3 * x - 4 * log(x) - 5;
}

double input()
{
	double x;
	scanf_s("%lf", &x);
	return x;
}