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
	printf("input minimum value x\n");
	double x = input();

	printf("input maximum value x\n");
	double xk = input();

	printf("input dx\n");
	double dx = input();

	printf("x\ty\n");

	double tabulation_meaning;

	for (x;x < xk + dx;x = x + dx)
	{
		tabulation_meaning = tabulation(x);
		printf("%lf\t%lf\n", x, tabulation_meaning);
	}
	return 0;
}

double tabulation(double x)
{
	if (x <= 0)
	{
		puts("x should be bigger 0!");
		exit(1);
	}
	return 3 * x - 4 * log(x) - 5;
}

double input()
{
	double x = 0;
	int result = scanf_s("%lf", &x);
	if (result != 1)
	{
		puts("Error entering number");
		exit(1);
	}

	if (x > 0)
	{
		return x;
	}

	puts("x should be bigger 0!");
	exit(1);
}