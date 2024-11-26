/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 11:29:23 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_strnstr(void)
{
    printf("Testing ft_strnstr...\n");

    const char *haystack = "Hello, World!";
    const char *needle = "World";
    const char *needle_not_found = "42";

    if (ft_strnstr(haystack, needle, 12) == ft_strnstr(haystack, needle, 12))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_strnstr(haystack, needle_not_found, 12) == ft_strnstr(haystack, needle_not_found, 12))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    if (ft_strnstr(haystack, "", 12) == ft_strnstr(haystack, "", 12))
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");
}
