/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
#include "sort.h"
/**
 * bubble_sort - a func that sorts in bubble technique
 * @array: a list of ints
 * @size: the size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j;

	if (!array)
		return;

	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
