#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints an array of integars
 * @array: the array to print
 * @size: the size of the array
 */

void print_array(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
}

/**
 * bubble_sort - sorts an array of integars in ascending order using bubble
 * sort algorithm.
 * @array: the array to sort
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
