/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void example_iter_func(unsigned int i, char *c)
{
    *c += i; // Modify the character based on its index
}

void test_ft_striteri(void)
{
    printf("Testing ft_striteri...\n");

    char s[] = "abc"; // Mutable string
    ft_striteri(s, example_iter_func);

    if (strcmp(s, "ace") == 0) // 'a' + 0 = 'a', 'b' + 1 = 'c', 'c' + 2 = 'e'
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");
}