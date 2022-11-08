/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:16:23 by framos-p          #+#    #+#             */
/*   Updated: 2022/06/13 10:13:08 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*new;

	if (!*lst || !*del)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		while (temp)
		{
			del(temp -> content);
			new = temp -> next;
			free(temp);
			temp = new;
		}
		*lst = NULL;
	}
}
