/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:33:25 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/11 14:00:28 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isalpha('B'));	
	printf("%d\n", ft_isalpha('z'));	
	printf("%d\n", ft_isalpha('5'));	
	printf("%d\n", ft_isalpha('*'));	

	return 0;
}
*/
