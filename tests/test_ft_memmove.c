/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_memmove(void)
{
    printf("Testing ft_memmove...\n");

    char dest1[20] = "Original";
    char dest2[20] = "Original";
    const char src[] = "Test";

    ft_memmove(dest1 + 3, src, 4);
    memmove(dest2 + 3, src, 4);

    if (memcmp(dest1, dest2, 20) == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");
}