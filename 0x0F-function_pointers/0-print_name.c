/**
 * print_name - prints name using function pointer
 * @name: name of the person
 * @f: - function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name !=  0 && f != 0)
	{
	f(name);
	}
}
