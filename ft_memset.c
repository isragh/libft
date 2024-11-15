/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:49:42 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 12:53:55 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (n--)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}

/*
#include <stdio.h>

int	main()
{
	char str[20] = "Hello, world!";
	
	printf("%s\n", (char *)ft_memset(str, 'a', 5));
	return 0;
}
*/
