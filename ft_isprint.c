/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:24:21 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/11 15:30:07 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('&'));
	printf("%d\n", ft_isprint('\0'));

	return 0;
}
*/
