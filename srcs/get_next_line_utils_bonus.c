/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:47:57 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:48:12 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	s3 = malloc(sizeof(char) * ((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1)));
	if (!s3)
	{
		free(s3);
		return (NULL);
	}
	i = -1;
	while (s1[++i] != 0)
		s3[i] = s1[i];
	j = 0;
	while (s2[j])
		s3[i++] = s2[j++];
	s3[i] = '\0';
	free (s1);
	return (s3);
}

size_t	ft_strlen_gnl(char *str)
{
	size_t	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}	
	return (x);
}