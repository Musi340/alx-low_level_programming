/**
* _strstr - locates a substring
* @haystack: the string to be searched
* @needle: substring to be located
*
* Return: pointer to beginning of substing or NULL if none
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (m = i, j = 0; needle[j] != '\0'; j++, m++)
		{
			if (needle[j] != haystack[m] || haystack[m] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
