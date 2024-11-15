/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:01:02 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 15:01:30 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Hello, World!";
	char dest[50];
	
	printf("Source string: %s\n", src);

	memcpy(dest, src, strlen(src) + 1);

 	printf("Copied string using custom memcpy: %s\n", dest);

	return 0;
}
*/
