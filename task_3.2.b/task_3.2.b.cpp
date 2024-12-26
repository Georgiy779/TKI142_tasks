#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>

/**
* @brief расщёт факториала
* @param k значение факториала
* @return k
*/
double factorial(int n);

/**
* @brief ввод переменной
* @param n значение вводимой переменной
* @return n
*/
int input();

/**
* @brief вычисление сумму всех членов последовательности, не меньших заданного числа e
* @param sum значение суммы членов последовательности
* @param n переменная для вычисление сумму всех членов последовательности, не меньших заданного числа e
* @param E значение члена последовательности
* @return sum
*/
double sum(double e);

/**
* @brief точка входа в програму
* @param e значение пераметра e
* @return 0 в случве успеха
*/
int main()
{
	double e, amount;

	printf("input e\n");
	e = input();

	amount = sum(e);
	printf("Sum = %lf\n", amount);

	return 0;
}

double factorial(int n)
{
	double k = 1;

	for (int i = 1;i <= n; i++)
		k = k * i;

	return k;
}

int input()
{
	int n;
	scanf_s("%d", &n);
	return n;
}

double sum(double e)
{
	int i, n = 0;
	double E = 0, sum = 0;
	for (i = 1;n < 1000;i++ )
	{
		E = factorial(i) / factorial(i + 4);
		if (E >= e)
		{
			sum = sum + E;
			n--;
		}
		else
			n++;
	}
	return sum;
}