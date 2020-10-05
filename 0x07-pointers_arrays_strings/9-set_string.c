/**
* set_string - sets the value of a pointer to a char
* @s: the pointer to be set to char
* @to: char to be set
*
*/
void set_string(char **s, char *to)
{
	*s = *(&to);
}
