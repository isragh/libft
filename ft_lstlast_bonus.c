/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonues.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:43:31 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 09:50:53 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *temp;

	temp = lst;
	if (!lst)
		return (NULL);
	while (temp)
	{
		if (!temp->next)
			return (temp);
		temp = temp->next;
	}
	return (temp);
}
