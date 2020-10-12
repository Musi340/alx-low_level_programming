/**
* _strchr - locates a character to a string
* @s: string to be checked
* @c: character to be located
*
* Return: pointer to the first c occurrence or NULL if none
*/
char *_strchr(char *s, char c)
{
	char *p;

	while (*s)
	{
		if (*s == c)
		{
		p = &*s;
		return (p);
		}
		s++;
	}
	if (!c)
	{
	return (s);
	}
	return (0);
}
