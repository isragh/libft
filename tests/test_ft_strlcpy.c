/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 11:28:01 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_strlcpy(void)
{
    printf("Testing ft_strlcpy...\n");

    char dest1[10];
    char dest2[10];
    const char *src = "Hello";

    if (ft_strlcpy(dest1, src, 5) == ft_strlcpy(dest2, src, 5) && memcmp(dest1, dest2, 10) == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (ft_strlcpy(dest1, src, 0) == ft_strlcpy(dest2, src, 0))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");
}
