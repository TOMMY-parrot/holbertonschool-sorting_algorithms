#include "sort.h"

/**
 * quick_sort - sorts in ascending order
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	if (array && size)
		sort(array, 0, size - 1, size);
}

/**
 * sort - sorts an array
 * @array: array to be sorted
 * @min: start limit
 * @max: end limit
 * @size: size of the array
 *
 * Return: void
 */

void sort(int *array, int min, int max, size_t size)
{
	int num;

	if (min < max)
	{
		num = divide(array, min, max, size);
		sort(array, min, num - 1, size);
		sort(array, num + 1, max, size);
	}
}

/**
 * divide - divide array into sections based on num
 * @array: array to be divided
 * @min: start limit
 * @max: end limit
 * @size: size of the array
 *
 * Return: index of the next pivot
 */

int divide(int *array, int min, int max, size_t size)
{
	int num;
	int idx, g, tmp;

	num = array[max];
	idx = min - 1;

	for (g = min; g < max; g++)
	{
		if (array[g] <= num)
		{
			idx++;
			if (idx != g)
			{
				tmp = array[idx];
				array[idx] = array[g];
				array[g] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[max] < array[idx + 1])
	{
		tmp = array[idx + 1];
		array[idx + 1] = array[max];
		array[max] = tmp;
		print_array(array, size);
	}
	return (idx + 1);
}
