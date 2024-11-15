/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:02:41 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 15:33:25 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s || d >= s + n)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_memmove(dest, src, 13);

	printf("Result of ft_memmove: %s\n", dest);  // Should print "Hello, World!"
	
	return 0;
}
*/
