/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonues.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:43:31 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 09:50:53 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int x;

	x = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		x++;
	}
	return (x);
}
