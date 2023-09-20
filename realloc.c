#include "shell.h"

/**
 * Fills memory with a constant byte using _memset in the project
 * s: the pointer to the memory area in the group task
 * @b: the byte with which to fill *s for the assigned task
 * @n: the number of bytes that need to be filled assigned
 * a pointer to the memory location s in the assigned task
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * Ffree releases a group of strings.
 * @pp: a collection of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * Reallocates a memory block with the command _realloc.
 * Pointer to previously malloc'd block for @ptr
 * @old_size: Byte count for the preceding block
 * @new_size: New block size in bytes
 *
 * Pointer to the old block nameen is returned.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
