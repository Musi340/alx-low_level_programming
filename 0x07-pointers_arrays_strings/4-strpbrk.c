/**
* _strpbrk - searches a string for a set of bytes
* @s: the string to be searched
* @accept: bytes to be returned from s
*
* Return: pointer to bytes in s or NULL if none
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;
	int j;
	int z;
	char *p;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	j--;
	for (k = 0; accept[k] != '\0'; k++)
	{
	}
	k--;
	for (i = 0; i <= j; i++)
	{
	for (z = 0; z <= k; z++)
	{
	if (s[i] == accept[z])
	{
	p = &s[i];
	return (p);
	}
	}
	}
	return (0);
}
