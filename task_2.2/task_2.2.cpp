#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* @brief Ввод переменных x
* @param x значение пераметра x
* @return возвращение переменной x
*/
double input();

/**
* @brief точка входа в програму
* @param x значение пераметра x
* @param y значение пераметра y
* @param a значение пераметра a
* @return возвращение переменной y
*/
double output(double x, double a);

/**
* @brief точка входа в програму
* @param x значение пераметра x
* @param y значение пераметра y
* @param a значение пераметра a
* @return 0 в случве успеха
*/
int main()
{
	const double a = 2.5;
	double x, y;
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
		return x * pow(sin(x), 2);
	else
		return x * pow(cos(x), 2);
}