/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_isprint(void)
{
    printf("Testing ft_isprint...\n");

    char c1 = ' ';
    char c2 = '~';
    char c3 = '\n';

    if (ft_isprint(c1) == isprint(c1))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_isprint(c2) == isprint(c2))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    if (ft_isprint(c3) == isprint(c3))
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");
}