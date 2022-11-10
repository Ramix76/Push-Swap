/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framos-p <framos-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:16:23 by framos-p          #+#    #+#             */
/*   Updated: 2022/11/08 17:41:16 by framos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;
	t_stack	*new;

	if (!*lst)
		return ;
	temp = *lst;
	while (temp)
	{	
		new = temp -> next;
		free(temp);
		temp = new;
	}
	*lst = NULL;
}
