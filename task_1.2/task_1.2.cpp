#include <stdio.h>
#include <math.h>

/**
* @brief ввод значение координаты точки А или B
* @param x значение координаты у точки А или B
* @return значения x
*/
double input();

/**
* @brief расщёт расстояния от точки А до точки B
* @param Ax значение пераметра "x" у точки А
* @param Ay значение пераметра "y" у точки A
* @param Bx значение пераметра "x" у точки B
* @param By значение пераметра "y" у точки B
* @param S значение расстояния от точки А до точки B
* @return значения S
*/
double output(double Ax, double Ay, double Bx, double By);

/**
* @brief точка входа в програму
* @param Ax значение пераметра "x" у точки А
* @param Ay значение пераметра "y" у точки A
* @param Bx значение пераметра "x" у точки B
* @param By значение пераметра "y" у точки B
* @param S значение переменной расстояния между точками А и B
* @return 0 в случве успеха
*/
int main()
{
	double Ax, Ay, Bx, By;
	double S;
	printf("Input Ax \n");
	Ax = input();
	printf("Input Ay \n");
	Ay = input();
	printf("Input Bx \n");
	Bx = input();
	printf("Input By \n");
	By = input();
	S = output(Ax, Ay, Bx, By);
	printf("S = %f", S);
	return 0;
}

double input()
{
	double x;
	scanf_s("%lf", &x);
	return x;
}

double output(double Ax, double Ay, double Bx, double By)
{
	double S;
	S = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
	return S;
}