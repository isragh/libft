/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:44:42 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_isalnum(void)
{
    printf("Testing ft_isalnum...\n");
    char c1 = 'A';    // Alphanumeric
    char c2 = 'z';    // Alphanumeric
    char c3 = '1';    // Alphanumeric
    char c4 = '!';    // Non-alphanumeric

    if ((ft_isalnum(c1) != 0) == (isalnum(c1) != 0))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    if ((ft_isalnum(c2) != 0) == (isalnum(c2) != 0))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");

    if ((ft_isalnum(c3) != 0) == (isalnum(c3) != 0))
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");

    if ((ft_isalnum(c4) != 0) == (isalnum(c4) != 0))
        printf("Test 4: ✅ Passed\n");
    else
        printf("Test 4: ❌ Failed\n");
}
