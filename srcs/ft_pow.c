/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                       :+:      :+:    :+:       */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:47:57 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:48:12 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	ft_pow(double x, double y)
{
	double	re;

	re = 1;
	while (--y >= 0)
		re *= x;
	return (re);
}