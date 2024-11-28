/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_memchr(void)
{
    printf("Testing ft_memchr...\n");

    const char *s = "Hello, World!";
    int c1 = 'o';
    int c2 = 'x';

    if (ft_memchr(s, c1, 13) == memchr(s, c1, 13))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_memchr(s, c2, 13) == memchr(s, c2, 13))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");
}