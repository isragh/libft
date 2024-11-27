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

void *duplicate_content(void *content)
{
    return strdup((char *)content);
}

void delete_content(void *content)
{
    free(content);
}

void test_ft_lstmap(void)
{
    printf("Testing ft_lstmap...\n");

    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    node1->next = node2;
    node2->next = node3;

    t_list *new_list = ft_lstmap(node1, duplicate_content, delete_content);

    if (new_list && strcmp((char *)new_list->content, "Node 1") == 0 &&
        strcmp((char *)new_list->next->content, "Node 2") == 0 &&
        strcmp((char *)new_list->next->next->content, "Node 3") == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    ft_lstclear(&new_list, free);
    free(node3);
    free(node2);
    free(node1);
}
