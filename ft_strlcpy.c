/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:55:26 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 16:01:15 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

/*
#include <stdio.h>

int main() 
{
        char dest[20];
        const char *src = "Hello, world!";

        size_t copied = ft_strlcpy(dest, src, sizeof(dest));
        printf("Copied string: %s\n", dest);
        printf("Length of source: %zu\n", copied);
        
        return 0;
}
*/
