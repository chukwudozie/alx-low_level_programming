#include "main.h"

/**
 * alloc_grid - two dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to two dimensional array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width < 1 || height < 1)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);

	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *)malloc(sizeof(int) * width);

			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
