#include "sort.h"
/**
 * quick_sort - sorts an array with the Quick sort technique
 * @array: array of ints
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_recursion(array, 0, (int)size - 1, size);
}
/**
 * quick_recursion - help func
 * @left: left index
 * @right: right index
 * @size: size of the array
 * @array: array of ints
 */
void quick_recursion(int *array, int left, int right, size_t size)
{
	int piv;

	if (left < right)
	{
		piv = partition(array, left, right, size);
		quick_recursion(array, left, piv - 1, size);
		quick_recursion(array, piv + 1, right, size);
	}
}
/**
 * partition - gives a piv index for QS
 * @array: array of ints
 * @left: left index
 * @right: right index
 * @size: size of the array
 * Return: piv index
 */
int partition(int *array, int left, int right, size_t size)
{
	int tmp, i;
	int j;

	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] < array[right])
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[right] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[right];
		array[right] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
