/**
*  _strlen -returns length of string
* @s: string to be checked
*Return: returns length of string
*/
int _strlen(char *s)
{
	int  p;
	int result;

	for (p = 0; s[p] != '\0'; p++)

		result = p + 1;
	return (result);
}
