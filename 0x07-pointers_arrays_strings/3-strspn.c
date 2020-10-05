/**
* _strspn - gets the length of a prefix substring
* @s: the initial segment of the string
* @accept: bytes to be returned from initial segment of s
*
* Return: number of bytes in s from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int z;

	z = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				z++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
		}
	return (z);
}
