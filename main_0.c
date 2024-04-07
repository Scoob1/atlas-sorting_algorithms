#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size);
void print_array(int *array, size_t size);

int main()
{
	int array[] = {5, 3, 8, 1, 6, 2, 7, 4};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Original array:\n");
	print_array(array, size);

	bubble_sort(array, size);

	printf("Sorted array:\n");
	print_array(array, size);

	return (0);
}
