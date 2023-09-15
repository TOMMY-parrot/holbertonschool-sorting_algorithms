#include "sort.h"

/**
 * selection_sort - sorts in ascending order
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t idx, f, min, tmp;

	if (array == NULL)
		return;

	for (idx = 0; idx < size - 1; idx++)
	{
		min = idx;
		for (f = idx + 1; f < size; f++)
		{
			if (array[min] > array[f])
				min = f;

		}

		if (min != idx)
		{
			tmp = array[min];
			array[min] = array[idx];
			array[idx] = tmp;

			print_array(array, size);
		}
	}
}
