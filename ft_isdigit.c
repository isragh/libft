/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:01:22 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:45:58 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isdigit('6'));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('Z'));
	return 0;
}
*/
