/**
* _strchr - locates a character to a string
* @s: string to be checked
* @c: character to be located
*
* Return: pointer to the first c occurrence or NULL if none
*/
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	p = &s[i];
	return (p);
	}
	}
	return ("NULL");
}
