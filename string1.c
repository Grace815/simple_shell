#include "shell.h"

/**
 * A string can be copied using the function _strcpy.
 * @dest: the final location
 * the source, @src
 *
 * Pointer to destination for return as per the requirements
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * Duplicates a string using _strdup.
 * The string to replicate is @str.
 *
 * Pointer to the duplicate string is returned.
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 * _puts - prints a string of input
 * the string that will be printed
 *
 * Returning null
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * The _putchar command outputs the character C.
 * @c: The text to print as per the tasks requirements
 *
 * Return: On attainment 1.
 * Errno is set appropriately and -1 is returned in the event of an error.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

