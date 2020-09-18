#include <stdio.h>
/**
*main-Prints the sizes of different data types
*char-character data type
*int- integer data type
*long int- long integer data type
*long long int- long long integer data type
*
*Return- returns a value zero
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
