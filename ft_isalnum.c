/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:47:57 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:58:30 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('b'));
	printf("%d\n", ft_isalnum('8'));
	printf("%d\n", ft_isalnum('*'));

}
*/
