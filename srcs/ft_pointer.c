/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:47:57 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:48:12 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_pointer(size_t n, char *base)
{
	size_t	nbr_final[16];
	int		result;
	int		i;

	i = 0;
	result = 0;
	if (n == 0)
		result += write(1, "0x0", 3);
	if (n != 0)
		result += write(1, "0x", 2);
	while (n)
	{
		nbr_final[i] = n % 16;
		n = n / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[nbr_final[i]]);
	return (result);
}