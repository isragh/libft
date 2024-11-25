/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:10:52 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 11:33:36 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0') 
		return ((char *)haystack);
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
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
