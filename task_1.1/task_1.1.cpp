#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h> 

/**
* @brief Расчитываем значение а
* @param x значение пераметра x
* @param y значение пераметра y
* @param z значение пераметра z
* @return значение a
*/
double getA(const double x, const double y, const double z);

/**
* @brief Расчитываем значение b
* @param x значение пераметра x
* @param y значение пераметра y
* @param z значение пераметра z
* @return значение b
*/
double getB(const double x, const double y, const double z);

/**
* @brief Точка входа в програму
* @return 0 в случае успеха програмы
*/
int main()
{
	const double x = -2.9, y = 15.5, z = 1.5;
	printf("a=%f\n", getA(x, y, z));
	printf("b=%f\n", getB(x, y, z));
}

double getA(const double x, const double y, const double z)
{
	return sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin((x + z) / x), 3);;
}

double getB(const double x, const double y, const double z)
{
	return pow(cos(pow(x, 3)), 2) - x / (sqrt(pow(z, 2)) + pow(y, 2));;
}