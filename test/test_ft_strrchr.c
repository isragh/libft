/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:30:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:30:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_strrchr(void)
{
    printf("Testing ft_strrchr...\n");

    const char *s = "Hello, World!";
    int c1 = 'o';
    int c2 = 'z';

    if (ft_strrchr(s, c1) == strrchr(s, c1))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_strrchr(s, c2) == strrchr(s, c2))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");
}