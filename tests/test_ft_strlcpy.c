/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 13:33:22 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_strlcpy(void)
{
    printf("Testing ft_strlcpy...\n");

    char dest1[10] = {0};
    char dest2[10] = {0};
    const char *src = "Hello, World!";
    size_t size = 5;

    size_t ret1 = ft_strlcpy(dest1, src, size);
    size_t ret2 = ft_strlcpy(dest2, src, size);

    if (ret1 == ret2 && memcmp(dest1, dest2, 10) == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    char dest3[10] = {0};
    char dest4[10] = {0};
    size = 0;

    ret1 = ft_strlcpy(dest3, src, size);
    ret2 = ft_strlcpy(dest4, src, size);

    if (ret1 == ret2 && memcmp(dest3, dest4, 10) == 0)
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    char dest5[20] = {0};
    char dest6[20] = {0};
    size = 20;

    ret1 = ft_strlcpy(dest5, src, size);
    ret2 = ft_strlcpy(dest6, src, size);

    if (ret1 == ret2 && memcmp(dest5, dest6, 20) == 0)
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");
}

