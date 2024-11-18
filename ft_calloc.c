








#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size) 
{
	size_t total_size = count * size;

	if (count == 0 || size == 0) 
	        return malloc(0);

	void *ptr = malloc(total_size);

	if (!ptr)
		return NULL;

	unsigned char *byte_ptr = (unsigned char *)ptr;
	size_t i = 0;

	while (i < total_size) 
	{
        	byte_ptr[i] = 0;
		i++;
    	}

	return ptr;
}


/*
#include <stdio.h>

int	main() {
    	size_t count = 5;
    	size_t size = sizeof(int);

    	int *arr = (int *)ft_calloc(count, size);

    	if (arr == NULL) {
        	printf("Memory allocation failed.\n");
        	return 1;
    	}

	for (size_t i = 0; i < count; i++) {
        	printf("arr[%zu] = %d\n", i, arr[i]);
    	}

    	free(arr);

    	return 0;
}
*/

// MADE AT HOME ------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------
