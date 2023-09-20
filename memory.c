#include "shell.h"

/**
 * The function bfree frees a pointer and NULLs the address.
 * Address of the free pointer in @ptr
 *
 * If freed, return 1; otherwise, return 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
