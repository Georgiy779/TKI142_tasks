#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h> 
#include <math.h> 
 
/**
* @brief точка входа в програму
* @param n значение пераметра n(первых n членов)
* @param sum значение суммы
* @return 0 в случве успеха 
*/

int input(); 
double factorial(int n); 
double sum(int n);
 
int main()
{
	int n;
	n = input();
	sum(n); 
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

double sum(int n)
{
	double sum = 0; 
	for (int i = 1;i < n + 1; i++)
	{
		sum += factorial(i) / factorial(i + 4);
	}
	printf("sum = %lf\n", sum);
	return 0;
}