











#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n) {
    	const unsigned char *ptr1 = (const unsigned char *)s1;
    	const unsigned char *ptr2 = (const unsigned char *)s2;

    	while (n > 0) 
	{
        	if (*ptr1 != *ptr2)
            		return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}	

    return 0;
}

/*
#include <stdio.h>

int	main() {
    	char arr1[] = "Hello, World!";
    	char arr2[] = "Hello, Earth!";
    	size_t n = 7;

    	int result = ft_memcmp(arr1, arr2, n);

    	if (result == 0) {
        	printf("The first %zu bytes are identical.\n", n);
    	} else if (result > 0) {
        	printf("arr1 is greater than arr2 in the first %zu bytes.\n", n);
    	} else {
        	printf("arr1 is less than arr2 in the first %zu bytes.\n", n);
    	}

    	return 0;
}
*/

// MADE AT HOME ------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------
