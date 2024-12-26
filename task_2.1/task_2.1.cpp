#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

enum varShifts  // Способы замены 
{
	withVAR,	/* С дополнительной */
	noVAR,	    /* без */
};

/**
* @brief Ввод переменной
* @param x значение вводимой переменной пераметра
* @param res переменная для определения правильности ввода пременной x
* @return переменную х
*/
double input();

/**
* @brief точка входа в програму
* @param a значение пераметра a
* @param b значение пераметра b
* @param с переменная для смены значений переменных a и b
* @param withVAR переменная для определения ввода с дополнительной переменной
* @param noVAR переменная для определения ввода без дополнительной переменной
* @return 0 в случве успеха
*/
int shiftVarible(double *a, double*b, varShifts vs);

/**
* @brief точка входа в програму
* @param a значение пераметра a
* @param b значение пераметра b
* @param withVAR переменная для определения ввода с дополнительной переменной
* @param noVAR переменная для определения ввода без дополнительной переменной
* @return 0 в случве успеха
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en-US");

	double a, b;

	printf("input a\n");
	a = input();

	printf("input b\n");
	b = input();

	printf("a = %lf\n", a);
	printf("b = %lf\n", b);

	shiftVarible(&a, &b, withVAR);
	printf("Вывод  с переменной\n");
	printf("a = %lf\n", a);
	printf("b = %lf\n", b);

	shiftVarible(&a, &b, noVAR);
	printf("Вывод\n");
	printf("a = %lf\n", a);
	printf("b = %lf\n", b);

	return 0;
}

double input()
{
	double x;

	for (;;)
	{
		int res = scanf_s("%lf", &x);

		if (res > 0)
			return x;

		while ((getchar()) != '\n');

		printf("Ввидите число \n");
	}
}

int shiftVarible(double*a, double *b, varShifts vs)
{
	if (vs == withVAR)
	{
		double c;
		c = *a;
		*a = *b;
		*b = c;
	}

	if (vs == noVAR)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
	}

	return 0;
}