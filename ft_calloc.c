/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:53:57 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 10:56:09 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char		*byte_ptr;
	size_t				total_size;
	void				*ptr;
	size_t				i;

	if (count == 0 || size == 0)
		total_size = 0;
	else
	{
		total_size = count * size;
		if (total_size / count != size)
			return (NULL);
	}
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size) 
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
