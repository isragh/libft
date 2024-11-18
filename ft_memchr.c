







#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n) 
{
	const unsigned char *ptr = (const unsigned char *)s;
 	unsigned char target = (unsigned char)c;
 	size_t i = 0;

    	while (i < n) 
	{
		if (ptr[i] == target)
			return (void *)&ptr[i];
		i++;
    	}

	return NULL;
}

/*
#include <stdio.h>

int	main() {
    	char arr[] = "Hello, World!";
    	char c = 'W';
    	size_t n = 13;

    	char *result = ft_memchr(arr, c, n);

    	if (result != NULL) {
        	printf("Character '%c' found at position: %ld\n", c, result - arr);
    	} else {
        	printf("Character '%c' not found in the first %zu bytes.\n", c, n);
    	}

    	return 0;
}
*/

// MADE AT HOME ------------------------------------------------------------------------
// -------------------------------------------------------------------------------------
