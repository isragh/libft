










#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len) 
{
	size_t i = 0;
	size_t j;

	if (*needle == '\0') 
	        return (char *)haystack;

	while (haystack[i] && i < len) 
	{
        	if (haystack[i] == needle[0]) 
		{
            		j = 0;
            		while (needle[j] && haystack[i + j] 
				&& i + j < len && haystack[i + j] == needle[j]) 
			{
                		j++;
            		}
            		
			if (needle[j] == '\0') 
                		return (char *)&haystack[i];
		}
        i++;
    	}

	return NULL;
}



/*
#include <stdio.h>

int	main() {
    	const char haystack[] = "Hello, World!";
    	const char needle[] = "World";
    	size_t len = 10;

    	char *result = ft_strnstr(haystack, needle, len);

    	if (result != NULL) {
        	printf("Found '%s' in '%s' within the first %zu characters.\n", needle, haystack, len);
   	} else {
        	printf("'%s' not found in '%s' within the first %zu characters.\n", needle, haystack, len);
    	}

    	return 0;
}
*/

// MADE AT HOME --------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------
