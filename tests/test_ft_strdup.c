/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_strdup(void)
{
    printf("Testing ft_strdup...\n");

    const char *s1 = "Hello, World!";
    const char *s2 = "";

    char *dup1 = ft_strdup(s1);
    char *dup2 = ft_strdup(s2);

    if (strcmp(dup1, s1) == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if (strcmp(dup2, s2) == 0)
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    free(dup1);
    free(dup2);
}