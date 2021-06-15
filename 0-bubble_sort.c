#include "sort.h"

/**
* bubble_sort - sorts array of integers in ascending order
* @array: array to be sorted
* @size: size of array
*
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag;

	for (i = 0; i < size && flag; i++)
	{
		flag = 0;
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}