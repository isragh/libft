/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:47:01 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 17:01:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ('\0');
}

/*
#include <stdio.h>

int main() {
	const char *str = "Hello, World!";
    	char ch = 'o';

   	 char *result = ft_strchr(str, ch);
    	if (result != NULL)
       		printf("Found '%c' at position: %ld\n", ch, result - str);
	else 
		printf("Character '%c' not found.\n", ch);
    

	result = ft_strchr(str, '\0');
    	if (result != NULL)
        	printf("Found '\\0' at the end of the string.\n");

  	return 0;
}
*/
