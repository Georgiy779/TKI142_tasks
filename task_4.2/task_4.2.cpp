#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <float.h>
#include <math.h>
#include <locale.h>
#include <time.h>

/**
* @brief Ввод массива
* @param n значение количество элементов массива
* @param f для определения способа ввода массива
* @param array указатель на массив
* @return array указатель на массив
*/
int* intmas(int n);

/**
* @brief Ввод массива
* @param n значение количество элементов массива
* @param min_val - значение минимального элемента массива
* @param sred_elem_mas - средний элемент массива
* @param min_index - индекс минимального элемента массива
* @param array указатель на массив
* @return 0
*/
int replacement_average(int* array, int n);

/**
* @brief Удаление всех элементов, в записи которых есть цифра 5
* @param n значение количество элементов массива
* @param arrayb указательвведёный для создание массива
* @param str указательвведёный для создание массива строк
* @param s значение количество элементов нового массива
* @param array указатель на массив
* @return возвращение массива arrayb
*/
int* delit(int* array, int n, int* s, char X);

/**
* @brief Удаление всех элементов, в записи которых есть цифра 5
* @param n значение количество элементов массива
* @param arrayb указательвведёный для создание массива
* @param s значение количество элементов нового массива
* @param array указатель на массив
* @return возвращение массива arrayb
*/
int* intmasS(int* array, int n);

/**
* @brief Сформировать новый массив на основе существующего
* @param n значение количество элементов массива
* @param s значение количество элементов нового массива
* @param array указатель на массив
* @param arrayb указатель на новый массив
* @return 0 в случве успеха или при неправильно введёной переменной n
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en-US");

	int n, s;
	printf("Ведите n (не чётный).\n");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("Неправильно введённая операция! \n");
		return 0;
	}

	int* array = intmas(n);

	if (array != NULL)
	{
		printf("Исходный массив\n");
		for (int i = 0; i < n; i++)
			printf("array[%d] = %d\n", i, array[i]);

		replacement_average(array, n);
		for (int i = 0; i < n; i++)
			printf("array[%d] = %d\n", i, array[i]);

		printf("\nУдаление всех элементов, в записи которых есть цифра 5.\n");
		int* arraya = delit(array, n, &s, '5');
		for (int i = 0; i < s; i++)
			printf("arraya[%d] = %d\n", i, arraya[i]);

		printf("\nСформировать новый массив на основе существующего.\n");
		int* arrayS = intmasS(array, n);
		for (int i = 0; i < n; i++)
			printf("arrayb[%d] = %d\n", i, arrayS[i]);

		free(array);
		free(arraya);
		free(arrayS);
	}
	else
		printf("error");

	return 0;
}

int* intmas(int n)
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

int replacement_average(int* array, int n)
{
	int min_val, sred_elem_mas, min_index;

	sred_elem_mas = (n - 1) / 2;

	min_val = array[0];
	min_index = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min_val)
		{
			min_val = array[i];
			min_index = i;
		}
	}

	printf("\nМинимальный элемент массива = %d\n", array[min_index]);
	printf("Средний элемент массива = %d\n", array[sred_elem_mas]);

	array[sred_elem_mas] ^= array[min_index] ^= array[sred_elem_mas] ^= array[min_index];

	return 0;
}

int* delit(int* array, int n, int* s, char X)
{
	int* arrayb = NULL;
	char* str = (char*)calloc(20, sizeof(char));
	*s = 0;

	for (int i = 0; i < n; i++)
	{
		int sl = snprintf(str, sizeof str, "%d", array[i]);
		int k = 0;
		for (k = 0; k < sl; k++)
		{
			if (str[k] == X)
				break;
		}

		if (k == sl)
		{
			*s = *s + 1;
			arrayb = (int*)realloc(arrayb, *s * sizeof(int));
			arrayb[*s - 1] = array[i];
		}

	}
	free(str);
	return arrayb;
}

int* intmasS(int* array, int n)
{
	int* arrayb = NULL;
	arrayb = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % 2 == 0)
			arrayb[i] = pow(array[i], 2);
		else
			arrayb[i] = 2 * array[i];
	}

	return arrayb;
}
