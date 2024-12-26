#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h> 
#include <math.h> 

/**
* @brief ввод значения n
* @param n значение первых n членов последовательности
* @return n
*/
int input(); 

/**
* @brief вычесление факториала
* @param n значение первых n членов последовательности
* @return факториала числа n
*/
double factorial(int n); 

/**
* @brief вычисление суммы первых n членов последовательности
* @param n значение первых n членов последовательности
* @param sum значение суммы первых n членов последовательности
* @return 0 в случве успеха
*/
double amount(int n);
 
/**
* @brief точка входа в програму
* @param n значение первых n членов последовательности
* @param sum значение суммы первых n членов последовательности
* @return 0 в случве успеха
*/
int main()
{
	int n;
	double sum;
	n = input();
	sum = amount(n);
	printf("sum = %lf\n", sum);
	return 0;
} 

int input()
{
	int n;
	printf("input n\n");
	scanf_s("%d", &n); 
	return n;
}

double factorial(int n)
{

	if (n > 1) 
		return n * factorial(n - 1);
	else
		return 1; 
} 

double amount(int n)
{
	double sum = 0; 
	for (int i = 1;i < n + 1; i++)
	{
		sum += factorial(i) / factorial(i + 4);
	}
	return sum;
}