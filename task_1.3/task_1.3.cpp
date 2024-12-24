#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/**
* @brief точка входа в програму
* @param m значение массы
* @param s значение площади
* @param P значение давления
* @return 0 в случве успеха
*/

double input(char type);
double output(double m, double S, double g);

int main()
{
	double m, S, P, g = 9.8;
	m = input('m');
	S = input('s');
	P = output(m, S, g);
	printf("P = %lf\n", P);
	return 0;
}


double input(char type)
{
	setlocale(LC_ALL, "Russian");

	double m;
	if (type == 'm')
		printf("Введите m в кг.\n");
	if (type == 's')
		printf("Введите S в м^2.\n");


	scanf_s("%lf", &m);
	return m;
}

double output(double m, double S, double g)
{
	double P;
	P = (m * g) / S;
	printf("m = %lf\n", m);
	printf("s = %lf\n", S);
	return P;
}