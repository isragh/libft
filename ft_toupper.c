/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:22:43 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 16:32:57 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>

int main()
{
	char test_char = 'b';
	printf("Original: %c, Uppercase: %c\n", test_char, ft_toupper(test_char));

	test_char = 'G';
	printf("Original: %c, Uppercase: %c\n", test_char, ft_toupper(test_char));

	test_char = '1';
	printf("Original: %c, Uppercase: %c\n", test_char, ft_toupper(test_char));

	return 0;
}
*/
