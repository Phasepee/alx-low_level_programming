#include <stdio.h>

/**
 * main - print the string in the main function
 *
 * Description: using the main function
 * Return: 0 if no error, Non-zero value  if errors.
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of long int: %d byte(s)\n", sizeof(li));
	printf("size of long long int: %d byte(s)\n", sizeof(lli));
	printf("size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
