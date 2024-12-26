#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>
#include <locale.h>
#include <time.h>

/**
* @brief ввод одномерного массива
* @param f репеменная для определения метода ввода массива
* @param array указатель на массив из n членов
* @param n количество членов массива
* @return array указатель на массив
*/
int* intarray(int n);

/**
* @brief поиск суммы отрицательных элементов, значения которых кратно 10
* @param sum сумму отрицательных элементов, значения которых кратно 10
* @param array указатель на массив из n членов
* @param n количество членов массива
* @return значение переменной sum
*/
int sumMultiples(int* array, int n);

/**
* @brief Заменить первые k элементов массива на те же элементы в обратном порядке
* @param с для изменения значений переменных массива
* @param array указатель на массив из n членов
* @param n количество членов массива
* @return 0 в случве успеха
*/
int replacement(int* array, int n);

/**
* @brief Определяем, есть ли пара соседних элементов с произведением, равным заданному числу.
* @param f значение заданого числа
* @param array указатель на массив из n членов
* @param n количество членов массива
* @return 0 в случве успеха
*/
int Pair(int* array, int n);

/**
* @brief точка входа в програму
* @param n значение количество переменных массива
* @param array указатель на массив из n членов
* @param sum сумму отрицательных элементов, значения которых кратно 10
* @param array указатель на массив из n членов
* @return 0 в случве успеха
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en-US");

	int n, sum;
	printf("input n\n");
	scanf_s("%d", &n);

	int* array = intarray(n);
	if (array != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			printf("array[%d] = %d\n", i, array[i]);
		}

		sum = sumMultiples(array, n);
		printf("sum = %d\n", sum);

		replacement(array, n);
		for (int i = 0; i < n; i++)
		{
			printf("array[%d] = %d\n", i, array[i]);
		}

		Pair(array, n);

		free(array);
	}
	else
		printf("error");
	return 0;
}

int* intarray(int n)
{
	srand(time(NULL));
	int f, i;
	int* array = NULL;
	printf("1 - keybord\n2 - random\n");
	scanf_s("%d", &f);
	printf("   -> %d\n\n", f);
	if (f == 1 || f == 2)
		array = (int*)calloc(n, sizeof(int));
	else
		printf("Неправильно введённая операция! \n");
	if (f == 1)
	{
		for (i = 0; i < n; i++)
			scanf_s("%d", &array[i]);
	}
	if (f == 2)
	{
		for (i = 0; i < n; i++)
			array[i] = rand();
	}
	return array;
}

int sumMultiples(int* array, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0 && array[i] % 10 == 0)
		{
			sum = sum + array[i];
		}
	}
	return 0;
}

int replacement(int* array, int n)
{
	int c, k;
	printf("Ввидите количество первых k элементов\n");
	scanf_s("%d", &k);
	k--;
	for (int i = 0; i < k; i++)
	{
		c = array[i];
		array[i] = array[k];
		array[k] = c;
		k = k - 1;
	}
	return 0;
}

int Pair(int* array, int n)
{
	int f;
	printf("input f\n");
	scanf_s("%d", &f);
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] * array[i + 1] == f)
			printf(" array[%d] = %d and array[%d] = %d\n", i, array[i], i + 1, array[i + 1]);
		else
			printf("Таких элементов нет.\n");
	}
	return 0;
}