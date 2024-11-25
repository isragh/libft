/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:53:57 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 11:22:02 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char		*byte_ptr;
	size_t				total_size;
	void				*ptr;
	size_t				i;

	total_size = count * size;
	ptr = malloc(total_size);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	if (count == 0 || size == 0) 
		return (malloc(0));
	if (!ptr)
		return (NULL);
	while (i < total_size) 
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
