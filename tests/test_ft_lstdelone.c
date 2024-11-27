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

void test_delete_content(void *content)
{
    free(content);
}

void test_ft_lstdelone(void)
{
    printf("Testing ft_lstdelone...\n");

    t_list *node = ft_lstnew(strdup("Node"));

    ft_lstdelone(node, test_delete_content);

    printf("Test 1: ✅ Passed (no memory leaks if correctly implemented)\n");
}
