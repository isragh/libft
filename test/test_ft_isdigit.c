/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:27:32 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_isdigit(void)
{
    printf("Testing ft_isdigit...\n");

    char c1 = '0';
    char c2 = '9';
    char c3 = 'A';

    if ((ft_isdigit(c1) != 0) == (isdigit(c1) != 0))
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");
       
    if ((ft_isdigit(c2) != 0) == (isdigit(c2) != 0))
        printf("Test 2: ✅ Passed\n");
    else
        printf("Test 2: ❌ Failed\n");
 
    if ((ft_isdigit(c3) != 0) == (isdigit(c3) != 0))
        printf("Test 3: ✅ Passed\n");
    else
        printf("Test 3: ❌ Failed\n");
}
