/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:05:50 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/20 14:10:17 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*duplicate;
	size_t	i;

	len = 0;
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (s1[len] != '\0')
		len++;
	if (!duplicate)
		return (NULL);
	while (i < len) 
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
