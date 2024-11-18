











#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t len = 0;
	
	while (s1[len] != '\0')
		len++;

	char *duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (!duplicate)
		return NULL;

	size_t i = 0;
	while (i < len) 
	{
        	duplicate[i] = s1[i];
        	i++;
    	}

	duplicate[i] = '\0';
	
	return duplicate;
}

/*
#include <stdio.h>

int	main() 
{
    	const char *original = "Hello, World!";
    	char *duplicate = ft_strdup(original);
	
	if (duplicate == NULL) {
        	printf("Memory allocation failed.\n");
        	return 1;
   	}

    	printf("Original: %s\n", original);
    	printf("Duplicate: %s\n", duplicate);

    	free(duplicate);

    	return 0;
}
*/

// MADE AT HOME --------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------
