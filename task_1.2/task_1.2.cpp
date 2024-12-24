#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

/**
* @brief точка входа в програму
* @param Ax значение пераметра x в точке А
* @param Ay значение пераметра y в точке A
* @param Bx значение пераметра x в точке B
* @param By значение пераметра y в точке B
* @param S значение переменной расстояния между точками
* @return 0 в случве успеха
*/

int input(int x);
double output(int Ax, int Ay, int Bx, int By);

int main()
{
	int Ax = 0, Ay = 0, Bx = 0, By = 0;
	Ax = input(Ax);
	Ay = input(Ay);
	Bx = input(Bx);
	By = input(By);
	output(Ax, Ay, Bx, By);
	return 0;
}

int input(int x)
{

	printf("Input \n");
	scanf_s("%d", &x);
	return x;
}

double output(int Ax, int Ay, int Bx, int By)
{
	double S = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
	printf("S = %f", S);
	return 0;
}