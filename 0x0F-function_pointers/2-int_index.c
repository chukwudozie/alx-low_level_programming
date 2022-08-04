#include "function_pointers.h"

/**
 * int_index - seaches for an integer
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to compare function
 * Return: index of match or -1 if failure
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);


}
