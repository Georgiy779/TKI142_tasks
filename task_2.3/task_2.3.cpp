#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <float.h>
#include <math.h>
#include <locale.h>

/**
* @brief точка входа в програму
* @param xa значение x точки а
* @param ya значение y точки а
* @param xb значение x точки b
* @param yb значение y точки b
* @param xc значение x точки c
* @param yc значение y точки c
* @param angle значение угла
* @param c значение параметра c(для проверки правильности ввода зачение координат)
* @return 0 в случве успеха
*/

double input();
int check(double xa, double ya, double xb, double yb, double xc, double yc);
double calc_anglу(double xa, double ya, double xb, double yb, double xc, double yc);

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en-US");

	double xa, ya, xb, yb, xc, yc;
	xa = input();
	printf("x1 = %lf\n", xa);

	ya = input();
	printf("y1 = %lf\n", ya);

	xb = input();
	printf("x2 = %lf\n", xb);

	yb = input();
	printf("y2 = %lf\n", yb);

	xc = input();
	printf("x3 = %lf\n", xc);

	yc = input();
	printf("y3 = %lf\n", yc);

	int c = check(xa, ya, xb, yb, xc, yc);
	if (c == 0)
	{
		//Вычеслим угол
		double angle = calc_anglу(xa, ya, xb, yb, xc, yc);
		printf("Угол ABC = %lf\n", angle);
	}
	return 0;
}

double input()
{
	double a;
	printf("input\n");
	scanf_s("%lf", &a);
	return a;
}

int check(double xa, double ya, double xb, double yb, double xc, double yc)
{
	double flag;
	if ((xc - xa) / (xb - xa) == (yc - ya) / (yb - ya))
	{
		printf("Точки лежат на одной прямой\n");
		return 1;
	}
	else
	{
		printf("Точки не лежат на одной прямой\n");
	}
	return 0;
}

double calc_anglу(double xa, double ya, double xb, double yb, double xc, double yc)
{
	//считаем длины отрезков
	double ba = sqrt(pow((xb - xa), 2.0) + pow((yb - ya), 2.0));
	double bc = sqrt(pow((xb - xc), 2.0) + pow((yb - yc), 2.0));
	double ac = sqrt(pow((xa - xc), 2.0) + pow((ya - yc), 2.0));

	return (
		// это в радианах
		acos((pow(ba, 2.0) + pow(bc, 2.0) - pow(ac, 2.0)) / (2.0 * ba * bc))
		* 180 / M_PI // а так в градусах
		);
}