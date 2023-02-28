#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int cntr = 0;
	int i;

	while (s[cntr] != '\0')
	cntr++;
	for (i = 0; i < cntr; i++)
	{
		cntr--;
		rev = s[i];
		s[i] = s[cntr];
		s[cntr] = rev;
	}
}
