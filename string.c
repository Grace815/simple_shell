#include "shell.h"

/**
 * _strlen gives back a string's length in the assigned project
 * @s: the string to check for length
 *
 * Return: string length in integer as per the requirements
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares two strings lexicographically in the assignemnt
 * first string, @s1
 * second string, @s2
 *
 * Result: negative if s1 s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with determines if the haystack comes before the needle.
 * @haystack: search string
 * @needle: the required substring
 *
 * Return: address of the following haystack character or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat joins two strings together.
 * @dest refers to the final buffer.
 * @src> the source buffer in the task
 *
 * Pointer to the final buffer is returned.
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

