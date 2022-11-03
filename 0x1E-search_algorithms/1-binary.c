#include <stdio.h>

void print_arr(int *arr, size_t start_idx, size_t end_idx);

/**
 * print_arr -function to return  array everytime array is halved
 * @array: pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value:the value to search for
 * Return: value if found else return  -1
 *
 *
 */


size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t l = 0;
	size_t r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

