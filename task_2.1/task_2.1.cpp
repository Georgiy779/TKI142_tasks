#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int input();
int outputc(int a, int b);
int output(int a, int b);

/**
* @brief точка входа в програму
* @param a значение пераметра a
* @param b значение пераметра b
* @return 0 в случве успеха
*/
int main()
{
	int a, b;
	a = input();
	b = input();
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	outputc(a, b);
	output(a, b);
	return 0;
}

int input()
{
	int x;
	printf("input\n");
	scanf_s("%d", &x);
	return x;
}

int outputc(int a, int b)
{
	setlocale(LC_ALL, "Russian");
	int c;
	c = a;
	a = b;
	b = c;
	printf("Вывод с\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}

int output(int a, int b)
{
	a ^= b ^= a ^= b;
	printf("Вывод\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}