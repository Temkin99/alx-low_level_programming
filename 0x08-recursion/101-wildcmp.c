#include "main.h"
/**
 * wildcmp - compare two strings.
 * @s1: string 1.
 * @s2: string 2. it can contain a * as a special character.
 *return: 1 if are identical, 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
	{
		return 1;
	}
	if (*s2 == '*')
	{
		while (*s2 == '*')
		{
			 s2++;
		}
		if (*s2 == '\0')
		{
			return 1;
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2))
			{
				 return 1;
			}
			s1++;
		}
	}
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			return wildcmp(s1 + 1, s2 + 1);
		}
	}
	 return 0;
}
