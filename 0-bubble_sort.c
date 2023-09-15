#include "sort.h"

/**
 * bubble_sort - sort array of intiger in acending order
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t idx, k;
	int tmp;

	if (array == NULL)
		return;

	for (k = 0; k < size - 1; k++)
	{
		for (idx = 0; idx < size - k - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				tmp = array[idx + 1];
				array[idx + 1] = array[idx];
				array[idx] = tmp;
				print_array(array, size);
			}
		}
	}
}