/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:24:21 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/20 14:21:07 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isnumber(char *str)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!str)
		return (0);
	len = ft_strlen(str);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < len)
	{
		if ((i < 3) && str[i] == '.' && ft_isdigit(str[i + 1]) == 1)
			i++;
		else if ((i < 3) && ft_isdigit(str[i]) == 1 && str[i + 1] == '.')
			i += 2;
		else if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}