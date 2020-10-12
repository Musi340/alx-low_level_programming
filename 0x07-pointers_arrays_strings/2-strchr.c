/**
* _strchr - locates a character to a string
* @s: string to be checked
* @c: character to be located
*
* Return: pointer to the first c occurrence or NULL if none
*/
char *_strchr(char *s, char c)
{
	int j;
	char *p;
	char result;

	for (j = 0; s[j] != '\0'; ++j)
	{
		if (s[j] == c)
		{
		p = &s[j];
		result = p;
		}
	}
	result = 0;
	return (result);
}
