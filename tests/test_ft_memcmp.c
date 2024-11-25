/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:30:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:30:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_memcmp(void)
{
    printf("Testing ft_memcmp...\n");

    const char *s1 = "abcdef";
    const char *s2 = "abcdez";
    const char *s3 = "abcdef";

    if (ft_memcmp(s1, s2, 5) == memcmp(s1, s2, 5))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_memcmp(s1, s3, 6) == memcmp(s1, s3, 6))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    if (ft_memcmp(s1, s2, 0) == memcmp(s1, s2, 0))
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");
}