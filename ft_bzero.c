/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:58:55 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 13:59:16 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = 0;
		ptr++;
	}
}

/*
#include <stdio.h>

int	main()
{
	char str[20] = "Hello, world!";

	ft_bzero(str, 5);

	printf("%s\n", str);

	return 0;
}
*/
