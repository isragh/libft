/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:31:07 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/20 13:38:44 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '-') 
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+') 
		i++;
	while (str[i] >= '0' && str[i] <= '9') 
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
