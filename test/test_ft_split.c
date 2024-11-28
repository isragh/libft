/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+        */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_split(void)
{
    printf("Testing ft_split...\n");

    const char *s = "Hello World 42";
    char delimiter = ' ';
    const char *expected[] = {"Hello", "World", "42"};

    char **result = ft_split(s, delimiter);

    int passed = 1;
    for (int i = 0; result[i] != NULL; i++)
    {
        if (strcmp(result[i], expected[i]) != 0)
        {
            passed = 0;
            break;
        }
    }

    if (passed)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    for (int i = 0; result[i] != NULL; i++)
        free(result[i]);
    free(result);
}