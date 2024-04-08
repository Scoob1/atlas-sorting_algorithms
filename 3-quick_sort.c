#include <stdio.h>
#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Lomuto partition scheme for Quick sort
 * @array: Array to partition
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
	    swap(&array[i + 1], &array[high]);
	    print_array(array, size);
	}

	return (i + 1);
}
