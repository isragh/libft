/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_lstnew(void)
{
    printf("Testing ft_lstnew...\n");

    t_list *node = ft_lstnew("Test content");

    if (node && node->content && strcmp((char *)node->content, "Test content") == 0 && node->next == NULL)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    free(node);
}
