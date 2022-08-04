#include "function_pointers.h"

/**
 * array_iterator - performs a function on all elements of an array
 * @array: input array
 * @size: size of the array
 * @action: function pointer parameter
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
