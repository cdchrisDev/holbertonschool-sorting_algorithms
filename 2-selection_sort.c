#include "sort.h"
/**
 * selection_sort - sorting in ascending order
 * @array: array of ints
 * @size: size of array
 * Return: void
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t Min, i, j = 0;
	int min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		Min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				Min = j;
			}
		}
		if (min != array[i])
		{
			array[Min] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
