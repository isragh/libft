/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:43:31 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/27 16:47:25 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr(int nbr)
{
	unsigned int	n;

	n = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		n += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		n += ft_putnbr(nbr / 10);
		n += ft_putchar(nbr % 10 + '0');
	}
	else
		n += ft_putchar(nbr + '0');
	return (n);
}