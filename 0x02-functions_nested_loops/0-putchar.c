#include "main.h"
/**
 * main  - This program prints _putchar and end with a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
		_putchar('\n');
		return (0);
}
