#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>

/**
* @brief точка входа в програму
* @param n значение пераметра n
* @param e значение пераметра e
* @param k значение пераметра k
* @return 0 в случве успеха
*/

double factorial(int n);
int input();
double sum(int n, double e);

int main()
{
	int n;
	double e;
	n = input();
	e = input();
	sum(n, e);
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
	printf("input n\n");
	scanf_s("%d", &n);
	return n;
}

double sum(int n, double e)
{
	int i;
	double E = 0, sum = 0;
	for (i = 1;i < n + 1; i++)
	{
		E = factorial(i) / factorial(i + 4);

		if (E >= e)
			sum = sum + E;
	}
	printf("Sum = %lf\n", sum);
	return 0;
}