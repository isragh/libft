/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:47:01 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 17:01:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while (i < n && s1[i] != '\0' && s2[i] != '\0') 
	{
        	if (s1[i] != s2[i])
            		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
	}

	if (i == n)
	        return 0;
    
    	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main() {
	const char *test1_s1 = "apple";
    	const char *test1_s2 = "apricot";

    	const char *test2_s1 = "banana";
    	const char *test2_s2 = "banana";

    	const char *test3_s1 = "orange";
    	const char *test3_s2 = "or";

    	const char *test4_s1 = "grape";
    	const char *test4_s2 = "grapefruit";

    	printf("Test 1: strncmp(\"%s\", \"%s\", 3) = %d\n", test1_s1, test1_s2, strncmp(test1_s1, test1_s2, 3));
    	printf("Test 2: strncmp(\"%s\", \"%s\", 6) = %d\n", test2_s1, test2_s2, strncmp(test2_s1, test2_s2, 6));
    	printf("Test 3: strncmp(\"%s\", \"%s\", 2) = %d\n", test3_s1, test3_s2, strncmp(test3_s1, test3_s2, 2));
    	printf("Test 4: strncmp(\"%s\", \"%s\", 7) = %d\n", test4_s1, test4_s2, strncmp(test4_s1, test4_s2, 7));

    	return 0;
}
*/

// MADE AT HOME -----------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------
