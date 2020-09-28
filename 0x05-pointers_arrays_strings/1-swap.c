/**
* swap_int - swaps values of two int pointer parameters
* @a:first parameter
* @b:second parameter
*
*/
void swap_int(int *a, int *b)
{
	int m;
	int n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}
