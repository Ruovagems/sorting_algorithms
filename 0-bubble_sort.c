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
	size_t i, len = size;
	bool swapped = 0;

	if (array == NULL) || (size > 1)
		return;
	while (swapped == 0)
	{
		swapped = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i] + 1)
			{
				swap_ele(array + i, array + i + 1);
				print_array(array, size);
				swapped = 0;
			}
		}
		len--;
	}
}