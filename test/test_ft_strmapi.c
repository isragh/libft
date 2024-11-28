/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char example_func(unsigned int i, char c)
{
    return c + i; // Modify the character based on its index
}

void test_ft_strmapi(void)
{
    printf("Testing ft_strmapi...\n");

    const char *s = "abc";
    char *result = ft_strmapi(s, example_func);

    if (strcmp(result, "ace") == 0) // 'a' + 0 = 'a', 'b' + 1 = 'c', 'c' + 2 = 'e'
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    free(result);
}