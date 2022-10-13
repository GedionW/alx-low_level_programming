#include "function_pointers.h"

/**
 * array_iterator - executes function given as
 * parameter on each elememts of array
 * @array: inpur integer array
 * @size: size of array
 * @action: pointer to fucntion
 * REturn: no return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)

		for (i = 0; i < size; i++)
			action(array[i]);
}
