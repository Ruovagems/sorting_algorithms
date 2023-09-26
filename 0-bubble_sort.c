#include "sort.h"

/**
* swap_ele - swaps elements
* @x: element to be swapped
* @y: element to be swapped
* Return: nothing
*/
void swap_ele(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}




/**
* bubble_sort - sorts elements in ascending order
* @array: the array of elements to be sorted
* @size: size of the array to be sorted
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (!array || array < 2)
		return;

	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; ++j)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}