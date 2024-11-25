/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_isalpha(void)
{
    printf("Testing ft_isalpha...\n");

    char c1 = 'A';
    char c2 = 'z';
    char c3 = '1';

    if (ft_isalpha(c1) == isalpha(c1))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_isalpha(c2) == isalpha(c2))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    if (ft_isalpha(c3) == isalpha(c3))
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");
}