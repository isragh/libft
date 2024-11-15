/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:01:22 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/11 15:23:20 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('%'));
	printf("%d\n", ft_isascii(128));

	return 0;
}
*/
