/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:34:36 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 16:39:04 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>

int	main() {
	char test_char = 'b';
	printf("Original: %c, Lowercase: %c\n", test_char, ft_tolower(test_char));

    	test_char = 'G';
    	printf("Original: %c, Lowercase: %c\n", test_char, ft_tolower(test_char));

    	test_char = '1';
    	printf("Original: %c, Lowercase: %c\n", test_char, ft_tolower(test_char));

    	return 0;
}
*/
