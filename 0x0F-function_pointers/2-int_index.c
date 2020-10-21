/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: number of elements in the array
 * @cmp: - pointer to function that compares values
 *
 * Return: - returns the index of the first element
 * -1 if no element matches and if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);
	if (size != 0 && cmp != 0 && array != 0)
	{
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}
	}
	return (-1);
}
