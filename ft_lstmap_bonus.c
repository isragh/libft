/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonues.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:43:31 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 09:50:53 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *temp;
	t_list  *newnode;

	if (!lst || !f)
		return (NULL);
	temp = NULL;
	while (lst)
	{
		newnode = ft_lstnew((*f)(lst->content));
		if (!newnode)
		{
			ft_lstclear(&temp, (del));
			return (NULL);
		}
		if (newnode)
			ft_lstadd_back(&temp, newnode);
		lst = lst->next;
	}
	return (temp);
}
