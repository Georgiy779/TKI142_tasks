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
	double x = input();
	printf("x = %lf\n", x);
	double y = output(x, a);
	printf("y = %lf\n", y);
	return 0;
}

double input()
{
	double x = 0;
	printf("input x.\n");
	int result = scanf_s("%lf", &x);
	if (result != 1)
	{
		puts("Ошибка ввода числа");
		exit(1);
	}
	return x;
}

double output(double x, double a)
{
	return x > a ? x * pow(sin(x), 2) : x * pow(cos(x), 2);
}