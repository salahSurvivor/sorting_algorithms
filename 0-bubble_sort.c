#include "sort.h"
/**
 * swap_int - swap two values
 * @x: pointer to first integer
 * @y: pointer to second integer
 *
 */
void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * bubble_sort - a function that sorts an array of integers
 *		in ascending order using the Bubble sort algorithm
 *
 * @array: an array
 * @size: # of element in an array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(&array[j], &array[j + 1]);
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}
