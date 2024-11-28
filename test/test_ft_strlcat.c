/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:30:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 11:23:40 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_strlcat(void)
{
    printf("Testing ft_strlcat...\n");

    char dest1[20] = "Hello, ";
    char dest2[20] = "Hello, ";
    const char *src = "World!";

    size_t len1 = ft_strlcat(dest1, src, 20);
    size_t len2 = ft_strlcat(dest2, src, 20);

    if (len1 == len2 && strcmp(dest1, dest2) == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    char short_dest1[5] = "Hi";
    char short_dest2[5] = "Hi";

    len1 = ft_strlcat(short_dest1, src, 5);
    len2 = ft_strlcat(short_dest2, src, 5);

    if (len1 == len2 && strcmp(short_dest1, short_dest2) == 0)
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");
}
